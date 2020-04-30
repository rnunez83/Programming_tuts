#!/usr/bin/env python3
import os

def check_reboot():
    """returns true if computer is pending reboot."""
    return os.path.exist ("/run/reboot-required")

def main():
    if check_reboot():
        print("Pending Reboot...")
        sys.exit(1)

main()

