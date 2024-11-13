# Simple System Monitoring Tool

## Project Overview
This project involves creating a simple system monitoring tool on Linux. It includes tasks
related to Linux administration, C programing, shell scripting, bash scripting, and cron jobs.
Additionally, it integrates version control using Git and GiHub.

## Prerequisites
A Linux distribution (e.g., Ubuntu)
Basic knowledge of Linux commands
Internet connection for downloading necessary tools

## Step-by-step Guide
Navigate to project
	cd ~/sys_monitor
Initialize Git
	git init
Create README.md
	touch README.md
	nano README.md  # Add content, then save and exit.
Configure Git
	git config --global user.name "Your Name"
	git config --global user.email "your-email@example.com"
Add files
	git add .
Commit changes
	git commit -m "Initial commit with README.md"
Create a new repository on GitHub
Add remote origin
	git remote add origin git@github.com:YourUsername/Project_Folder.git
Pull remote changes
	git pull origin main --allow-unrelated-histories
Push changes to GitHub
	git push -u origin main
Set up SSH key
	ssh-keygen -t ed25519 -C "your-email@example.com"
	cat ~/.ssh/id_ed25519.pub  # Add the SSH key to GitHub
Verify SSH connection
	ssh -T git@github.com
Push changes 
	git push -u origin main

