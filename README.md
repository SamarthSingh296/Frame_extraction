# Extraction Tool (C++ + FFmpeg)

A simple C++ command-line tool that extracts frames from a video at a user-defined FPS and applies brightness adjustment, using FFmpeg.

This project is designed as a terminal-based utility, with interactive user input for flexibility and ease of use.

✨ Features

📂 Accepts video from any location

🎞️ Extract frames at custom FPS

🌤️ Adjust brightness level interactively
<img width="720" height="720" alt="frame_0001" src="https://github.com/user-attachments/assets/1592bc7f-ff59-47ab-9c12-1f411746120b" />
<img width="720" height="720" alt="frame_0024" src="https://github.com/user-attachments/assets/ad8ba28d-4592-48d0-bd92-bc72673c8ccd" />



🧠 Simple and beginner-friendly C++ code

⚙️ Uses FFmpeg under the hood

🚫 Output files are ignored via .gitignore

🛠️ Requirements

Make sure the following are installed on your system:

Linux / macOS

G++ (C++17 compatible)

FFmpeg

Install FFmpeg (Ubuntu/Debian)
sudo apt install ffmpeg

Check versions
g++ --version
ffmpeg -version 
How to Compile

Navigate to the project folder and compile using:

g++ extract_frames.cpp -o extract_frames -std=c++17

▶️ How to Run
./extract_frames <path_to_video>

Example
./extract_frames /home/haddybuddy/Videos/downloaded/movie.mp4
