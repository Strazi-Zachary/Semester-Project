main.cpp
README.md
userinterface.cpp
userinterface.h
waveedits.cpp
waveedits.h
wav_filecopy.cpp
wav_filecopy.h
wav_file.cpp
wav_file.h

class UI{
private: int menuChoice;
public:
    UI(int choice){
        menuChoice=choice;
        switch (menuChoice) {
            case 1:
                //display file info
                std::cout << "file" << std::endl;
                break;
            case 2:
                std::cout << "echo" << std::endl;
                //echo
                break;
            case 3:
                std::cout << "normal" << std::endl;
                //normalization
                break;
            case 4:
                std::cout << "gain" << std::endl;
                //gain
                break;
            default:
                std::cout<<"enter a proper menu choice please"<<std::endl;
        }
    }
};
