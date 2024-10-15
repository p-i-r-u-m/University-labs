import os
import subprocess

# import library for email
import smtplib
from email.mime.text import MIMEText
from email.mime.multipart import MIMEMultipart
from email.mime.base import MIMEBase
from email import encoders

import shutil
import argparse

# Define directories
current_dir = os.path.dirname(os.path.abspath(__file__))

project_dir = os.path.dirname(current_dir)
report_dir = os.path.join(project_dir, "report")
task_condition_dir = os.path.join(report_dir, "task_condition")
tests_result_dir = os.path.join(report_dir, "tests_result")

# Define files path
report_data = os.path.join(report_dir, "data.txt")
task_condition_data = os.path.join(task_condition_dir, "data.txt")
tests_result_data = os.path.join(tests_result_dir, "unit_result.txt")
auto_report_file = os.path.join(report_dir, "auto_report.py")

# main_cpp_file = os.path.join(project_dir, "build/src/main") 

def run_unit_tests():
    try:
        result = subprocess.run(["ctest", "--test-dir", "build", "--output-on-failure", "-j12"], capture_output=True, text=True, check=True)

        with open(tests_result_data, 'w', encoding='utf-8') as f:
            f.write(result.stdout)
        print(f"Result saved to {tests_result_data}")

    except subprocess.CalledProcessError as e:
        print(f"Error running tests: {e}")


# Function to run CMake and build project 
def build_cmake():
    try:
        
        # Run commands to compile CMake
        subprocess.run(["cmake", "-S", ".", "-B", "build"], check=True)
        subprocess.run(["cmake", "--build", "build"], check=True)

        print("Compilation successful!")

    except subprocess.CalledProcessError as e:
        print(f"Error during compilation: {e}")

# Function to create report docx file
def create_report():
   
    # Enter lab info
    lab_number = input("[Example: 06.1.іт]\nEnter lab number: ")
    lab_theme_name = input("Enter lab theme name: ")
    lab_goal = input("Enter lab goal: ")

    with open(report_data, 'w', encoding='utf-8') as f:
        f.write(f"{lab_number}\n{lab_theme_name}\n{lab_goal}")
    print(f"Data saved to {report_data}\n")

    # Enter lab task condition
    task_condition = input("Enter lab condition: ")

    with open(task_condition_data, 'w', encoding='utf-8') as f:
        f.write(task_condition)
    print(f"Data saved to {task_condition_data}\n")

    # Save results of unit tests
    run_unit_tests()

    # Creating report docx file
    subprocess.run(['python3', f'{auto_report_file}'])

