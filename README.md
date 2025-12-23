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
  <img src="assets/frames/frame1.png" width="240"/>
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

Frame_extraction/
├── extract_frames.cpp
├── README.md
├── .gitignore
└── assets/
└── frames/
├── frame1.png
├── frame2.png
└── frame3.png


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

