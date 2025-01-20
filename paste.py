import pyautogui
import time
import argparse
import sys

# Set up argument parser
parser = argparse.ArgumentParser(description="Simulate keyboard typing from a file.")
parser.add_argument("file", metavar="FILE", type=str, help="Path to the input text file.")
parser.add_argument(
    "-d", "--delay", type=float, default=5, help="Delay in seconds before typing starts (default: 5)."
)
parser.add_argument(
    "-i", "--interval", type=float, default=0.1, help="Interval between each character (default: 0.1)."
)

# Parse arguments
args = parser.parse_args()

# Check if -h is provided
if len(sys.argv) == 1:
    parser.print_help()
    sys.exit(1)

# Read the file content
try:
    with open(args.file, "r", encoding="utf-8") as file:
        content = file.read()
except FileNotFoundError:
    print(f"Error: File not found: {args.file}")
    sys.exit(1)

# Delay before typing
print(f"Typing will start in {args.delay} seconds...")
time.sleep(args.delay)

# Simulate typing the content
pyautogui.typewrite(content, interval=args.interval)

print("Typing completed!")
