#!/usr/bin/env python3
import os

def check_reboot():
    """returns true if computer is pending reboot."""
    return os.path.exist ("/run/reboot-required")

def main():
    pass

main()

