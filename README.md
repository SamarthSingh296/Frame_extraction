# 🎥 Frame Extraction Tool  
### *C++ • FFmpeg • Interactive CLI*

<p align="center">
  <i>Extract video frames with precision — control FPS and brightness directly from the terminal.</i>
</p>

---

## ✨ Overview

**Frame Extraction Tool** is a lightweight **C++ command-line application** that allows you to:

- 🎞️ Extract frames from any video file  
- ⏱️ Choose **custom FPS** interactively  
- 🌤️ Adjust **brightness levels**  
- 📂 Automatically create output folders  
- ⚙️ Leverage the power of **FFmpeg**

This project demonstrates **real-world C++ usage** with filesystem handling and external tool integration.

---

## ⚡ Quick Start

> ⚡ **Copy & paste these commands to get started**
>
> ```bash
> g++ extract_frames.cpp -o extract_frames -std=c++17
> ./extract_frames /home/samarth/Videos/downloaded/movie.mp4
> ```

---

## 🖼️ Sample Extracted Frames

<p align="center">
   <img width="720" height="720" alt="frame_0002" src="https://github.com/user-attachments/assets/4f0cabb7-1b3e-4556-98ed-599c0aa828f8" />

  <img src="assets/frames/frame2.png" width="240"/>
  <img src="assets/frames/frame2.png" width="240"/>
  <img src="assets/frames/frame3.png" width="240"/>
</p>

<p align="center">
  <i>Frames extracted at 2 FPS with brightness enhancement applied.</i>
</p>

---

## 🛠️ Tech Stack

| Tool | Purpose |
|---|---|
| **C++ (C++17)** | Core logic |
| **FFmpeg** | Video decoding & frame extraction |
| **Git & GitHub** | Version control |

---

## 📂 Project Structure
```text
Frame_extraction/
├── extract_frames.cpp
├── README.md
├── .gitignore
└── assets/
└── frames/
├── frame1.png
├── frame2.png
└── frame3.png

```
---

## ⚙️ Requirements

Ensure the following are installed:

- `g++` (C++17 compatible)
- `ffmpeg`

> ⚡ **Copy & paste to verify**
>
> ```bash
> g++ --version
> ffmpeg -version
> ```

---

## 🧰 Installation

### 🐧 Linux (Ubuntu / Debian)

> ⚡ **Copy & paste**
>
> ```bash
> sudo apt update
> sudo apt install ffmpeg
> ```

---

### 🍎 macOS (Homebrew)

> ⚡ **Copy & paste**
>
> ```bash
> brew install ffmpeg
> ```

---

### 🪟 Windows (Recommended: WSL)

> ⚡ **Copy & paste inside WSL**
>
> ```bash
> sudo apt install ffmpeg
> ```

---

## 🔧 Compilation

> ⚡ **Copy & paste to compile**
>
> ```bash
> g++ extract_frames.cpp -o extract_frames -std=c++17
> ```

---

## ▶️ Running the Program

> ⚡ **Copy & paste to run**
>
> ```bash
> ./extract_frames <path_to_video>
> ```

### Example

> ⚡ **Copy & paste**
>
> ```bash
> ./extract_frames /home/samarth/Videos/downloaded/movie.mp4
> ```

---

## 🧑‍💻 Interactive Prompts

After running, the program will ask:

```text
Enter FPS you require:
Enter brightness level (-1.0 to 1.0):

=======
# Extraction Tool (C++ + FFmpeg)

A simple C++ command-line tool that extracts frames from a video at a user-defined FPS and applies brightness adjustment, using FFmpeg.

This project is designed as a terminal-based utility, with interactive user input for flexibility and ease of use.

✨ Features

📂 Accepts video from any location

🎞️ Extract frames at cus🌤️ Adjust brightness level interactively
<img width="420" height="420" alt="frame_0001" src="https://github.com/user-attachments/assets/1592bc7f-ff59-47ab-9c12-1f411746120b" /><img width="420" height="420" alt="frame_0024" src="https://github.com/user-attachments/assets/ad8ba28d-4592-48d0-bd92-bc72673c8ccd" />



🧠 Simple and beginner-friendly C++ code

⚙️ Uses FFmpeg under the hood

🚫 Output files are ignored via .gitignore

🛠️ Requirements

Make sure the following are installed on your system:

Linux / macOS

G++ (C++17 compatible)

FFmpeg

Install FFmpeg (Ubuntu/Debian)
> ``` bash
>sudo apt install ffmpeg
>  ```

Check versions
> ```bash
>g++ --version
>ffmpeg -version 
> ```
How to Compile

Navigate to the project folder and compile using:
> ``` bash
> g++ extract_frames.cpp -o extract_frames -std=c++17
>> ```
▶️ How to Run
> ```bash
>./extract_frames <path_to_video>
>  ```

Example
> ⚡ **Copy & paste this command to run the program**
>
> ```bash
> ./extract_frames /home/username(huddybuddy)/Videos/downloaded/movie.mp4
> ```
