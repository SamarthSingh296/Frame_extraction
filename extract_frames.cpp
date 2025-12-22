#include <bits/stdc++.h>
#include <filesystem>
#include <cstdlib>

using namespace std;
namespace fs = filesystem;

int main(int argc, char* argv[]) {

    if (argc < 2) {
        cout << "Usage: ./extract_frames <video-file> <fps>\n";
        return 1;
    }

    string videoPath = argv[1];
    int fps;
    cout << "Enter FPS you require: ";
    cin >> fps;

   
    if (fps <= 0) {
        cout << "FPS must be a positive number\n";
        return 1;
    }
    float brightness;
    cout << "Enter brightness level (-1.0 to 1.0): ";
    cin >> brightness;

    if (brightness < -1.0 || brightness > 1.0) {
        cout << " Brightness must be between -1.0 and 1.0\n";
        return 1;
    }
    fs::path videoFile(videoPath);
    string videoName = videoFile.stem().string();//we use .stem()they take  the file name without extension

    string outputDir = videoName + "_frames";

    if (!fs::exists(outputDir)) {
        fs::create_directory(outputDir);
    }
    string command =
        "ffmpeg -i \"" + videoPath +
        "\" -vf fps=" + to_string(fps) +
        ",eq=brightness=" + to_string(brightness) +
        " \"" + outputDir + "/frame_%04d.png\"";


    cout << " Extracting frames...\n"<<fps<<"FPS...\n"<<brightness<<"Brightness";
    int result = system(command.c_str());

    if (result != 0) {
        cout << " Error !! extracting frames\n";
        return 1;
    }

    cout << " Frames extracted successfully!\n";
    cout << "Saved in folder: " << outputDir << endl;

    return 0;

}
