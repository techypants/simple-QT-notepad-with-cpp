# simple-QT-notepad-with-cpp[readme.txt](https://github.com/techypants/simple-QT-notepad-with-cpp/files/11799255/readme.txt)
## Notepad Application Readme

This readme provides information about the Notepad application file.

### How to Run the application

To use the Notepad application, follow these steps:

1. Open the application “notepad”
2. Type in whatever you wish to and select the text to use functions from taskbar.
3. In the menu section we have options like new file to create a new file window, to open an existing text file or to save file as per user given name.
4. in the taskbar we have options like bold/unbold or turn to subscript/superscript and   additionally change font size 
5.Also, in the About me section you can see my resume in a dialog box.


### What Has Been Done

The code in `mainwindow.cpp` implements a basic Notepad application with the following features:

- **Bold Text**: Clicking the "Bold" button applies or removes bold formatting to the selected text in the `ui->notep` QTextEdit widget.
- **Subscript Text**: Clicking the "Subscript" button applies subscript formatting to the selected word or the word under the cursor in the `ui->notep` QTextEdit widget.
- **Superscript Text**: Clicking the "Superscript" button applies superscript formatting to the selected word or the word under the cursor in the `ui->notep` QTextEdit widget.
- **New File**: The "New File" action creates a new instance of the MainWindow class, allowing the user to work on a new file in a separate window.
- **Open File**: The "Open File" action opens a file dialog that allows the user to select a text file to open. The content of the selected file is loaded into the `ui->notep` QTextEdit widget.
- **Save File**: The "Save File" action opens a file dialog that allows the user to specify a file name and location to save the content of the `ui->notep` QTextEdit widget as a text file (.txt).
- **Text Changes**: The `onTextChanged` slot handles text changes in the `ui->notep` QTextEdit widget. If the current text matches the default text ("Enter text here..."), it is cleared.
- **My Resume**: The "My Resume" action loads the content of a text file named "Resume.txt" located in the application's base directory. The content is displayed in a read-only dialog window.
- **Font Size**: The combo box `ui->comboBox` allows the user to select a font size. Changing the selection updates the font size of the selected text in the `ui->notep` QTextEdit widget.

### Issues/Challenges
1.	Personally, first challenge was that I had Tkinter gui syntax from python’s  experience which is not much different from QT but the completely new layout was confusing at first.
2.	To figuring out the layout and creating functions from scratch for buttons and comboBox actions was creating a lag initially which was resolved from youtube videos and the online references.
3.	At last, many fancy and functional changes could’ve been done but due to time constraint this is the best I could do.

### Features

The Notepad application includes the following features:

- Formatting options for bold, subscript, and superscript text.
- File operations to create, open, and save text files.
- Ability to display a resume file in a read-only window.
- Font size selection for text in the editor.

### Certification

This application is certified as genuinely developed by Tanmay Pant. The references used for developing the application include YouTube and GitHub.
