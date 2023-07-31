<a name="yt"></a>

# yt2wav

#### <ins>__*a web- or app-based youtube audio converter tool*__</ins>

<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#view">Project Overview</a>
      <ul>
        <li><a href="#obj">Objectives</a></li>
      </ul>
    </li>
    <li>
      <a href="#tech">Technologies and Programming Languages</a>
      <ul>
        <li><a href="#front">Front-end (User Interface)</a></li>
        <li><a href="#back">Back-end</a></li>
        <li><a href="#ml">Libraries/APIs</a></li>
        <li><a href="#ide">IDEs (Integrated Development Environments)</a></li>
        <li><a href="#ml">Development Environment</a></li>
      </ul>
    </li>
    <li><a href="#uiux">UI/UX</a></li>
    <li>
      <a href="#map">Roadmap</a>
      <ul>
        <li><a href="#line">Timeline</a></li>
        <ul>
          <li><a href="#time">Time Estimate</a></li>
        </ul>
        <li><a href="#todo">To-Do List</a></li>
      </ul>
    </li>
    <li><a href="#start">Getting Started</a></li>
    <li><a href="#flow">Basic Workflow</a></li>
    <li>
      <a href="#io">Basic I/O Details</a>
      <ul>
        <li><a href="#i">Input</a></li>
        <li><a href="#o">Output</a></li>
        <li><a href="#sys">System Requirements</a></li>
        <li><a href="#user">User Requirements</a></li>
      </ul>
    </li>
    <li>
      <a href="#use">Usage</a>
      <ul>
        <li><a href="#pre">Prerequisites</a></li>
        <li><a href="#inst">Installation</a></li>
      </ul>
    </li>
    <li><a href="#feat">Key Features</a></li>
    <li><a href="#give">How to Contribute</a></li>
    <li><a href="#plus">Future Enhancements</a></li>
    <li><a href="#lic">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#ack">Acknowledgments</a></li>
  </ol>
</details>
  

---------------------------

<a name="view"></a>
## Project Overview 

The objective of this project is to create a versatile and user-friendly application that allows users to convert and download YouTube audio tracks into various audio file formats, including uncompressed audio (WAV), lossless compression (M4A), and lossy compression (MP3). Additionally, users can edit metadata for each audio track, with the option of AI/ML assistance for automatic metadata retrieval or generation. The project aims to cater to both web and desktop users, supporting macOS and Windows operating systems.

<a name="obj"></a>
### <ins>Objectives</ins>

<p align="right">(<a href="#yt">back to top</a>)</p>

---------------------

<a name="tech"></a>
## Technologies and Programming Languages


### Tech Stack Options:

> #### Web App:
>
>> ##### Version 1
>>> - **Front-end:** `React.js` or `Vue.js`
>>> - **Back-end:** `Node.js` with `Express.js`
>>> - **Libraries/APIs:** YouTube Data API, `FFmpeg` for audio conversion, AI/ML libraries (optional)
>
>> ##### Version 2
>>> 1. **Front-end:**
>>>> `Angular`: A popular framework for building robust web applications.
>>>> `Ember.js`: A framework for creating ambitious web applications with a strong focus on convention over configuration.
>>>>   - `Svelte`: A lightweight framework that compiles components to highly optimized vanilla JavaScript.
>> 2. **Back-end:**
>>>   - `Ruby on Rails`: A powerful and beginner-friendly framework for building web applications using the Ruby programming language.
>>>   - `Django`: A high-level Python web framework that promotes rapid development and clean, pragmatic design.
>>>   - `Flask`: A lightweight and flexible Python web framework that provides the essentials for building a web application.
>> 3.  **Libraries/APIs:**
>>>   - `FFmpeg.js`: A pure JavaScript port of FFmpeg for client-side audio conversion.
>>>   - `axios`: A promise-based HTTP client for making API requests.
>>>   - `MusiXmatch API`: For accessing music metadata, lyrics, and other related data.
> 

> #### Desktop App:
>
>> ##### Version 1
>>> - **Front-end:** `Electron.js` for cross-platform compatibility
>>> - **Back-end:** `Node.js` with `Express.js` (for handling API requests)
>>> - **Libraries/APIs:** YouTube Data API, `FFmpeg` for audio conversion, AI/ML libraries (optional)
>
>> ##### Version 2
>>> 1. **Front-end:**
>   - `React Native`: A framework for building cross-platform mobile applications with `React.js` components.
>   - `Flutter`: A UI toolkit for building natively compiled applications for mobile, web, and desktop from a single codebase.
> 2. **Back-end:**
>   - `Flask`: A lightweight and flexible Python web framework that can also be used for desktop app back-end functionality.
>   - `.NET Core`: A cross-platform, open-source framework for building modern applications for Windows, macOS, and Linux.
> 3.  **Libraries/APIs:**
>   - `Electron Forge`: A complete toolchain to package and distribute `Electron.js` applications.
>   - `Node.js child_process module`: For running `FFmpeg` and other command-line utilities.
>   - `Spotify Web API`: For accessing music metadata and related information.
 

### Integrated Development Environments (IDEs):

#### Web App: 
> 1. **Front-end:**
>   - <ins>Visual Studio Code</ins>: A popular and lightweight code editor with strong community support and numerous extensions for `Angular`, `Ember.js`, and `Svelte` development.
>   - <ins>WebStorm</ins>: A powerful IDE specifically designed for web development with excellent support for `Angular`, `Ember.js`, and `Svelte`.
> 3. **Back-end:**
>   - <ins>Visual Studio Code</ins>: An excellent choice for back-end development with `Ruby on Rails`, `Django`, and `Flask` due to its versatility and extensive plugin support.
>   - <ins>PyCharm</ins>: A specialized IDE for Python development that provides advanced tools for working with `Django` and `Flask` projects.
>     
#### Desktop App:
> 1. **Front-end:**
>   - <ins>Visual Studio Code</ins>: A versatile code editor suitable for `React Native` development with its wide range of extensions and `React Native`-specific tooling.
>   - <ins>IntelliJ IDEA</ins>: A robust IDE from JetBrains that supports `Flutter` development and offers powerful code analysis and debugging tools.
> 3. **Back-end:**
>   - <ins>Visual Studio Code</ins>: Can be used for back-end development with `Flask` and `.NET Core`, providing a lightweight and efficient development environment.
>   - <ins>Visual Studio</ins>: A comprehensive IDE for Windows desktop app development with `.NET Core` and `C#`.


Remember that some IDEs may offer better integration and support for specific tech stacks, so it's essential to explore and choose the one that fits your workflow and personal preferences.

Additionally, some IDEs may have community or professional editions, so be sure to consider your project's budget and needs when making a decision.

<p align="right">(<a href="#yt">back to top</a>)</p>

---------------------

## Roadmap:

- [ ]  Phase 1 (2-3 weeks): Set up the project structure, implement basic web or desktop app functionality to convert YouTube audio to WAV format, and allow user-selected location for file saving.
- [ ] Phase 2 (3-4 weeks): Add support for lossless compression (M4A) and lossy compression (MP3). Implement metadata editing functionality for each audio track manually.
- [ ] Phase 3 (4-5 weeks): Integrate AI/ML to automatically fetch or generate metadata. Enhance UI/UX and add advanced features, such as batch processing and playlist support.

<p align="right">(<a href="#yt">back to top</a>)</p>

---------------------

## UI/UX Implementation Details

The UI/UX should be intuitive and straightforward, featuring a simple input field for the YouTube video link and options for choosing the desired audio format and metadata editing. 

Users can choose between different audio formats and set the destination folder. 

Provide feedback on the conversion progress and allow users to view and edit metadata before downloading.



<p align="right">(<a href="#yt">back to top</a>)</p>

---------------------

## Basic Workflow Guide

1. User inputs the YouTube video link and selects the desired audio format (WAV, M4A, or MP3).
2. The application fetches the video data using the YouTube Data API.
3. The video is downloaded in the selected format and saved to the user-specified location.
4. If the user chooses to edit metadata, they can manually input the details or use AI/ML assistance.
5. The final audio file with edited metadata is saved.


<p align="right">(<a href="#yt">back to top</a>)</p>

---------------------

## Project Implementation Guide

1. **<ins>Getting Started</ins>:**
- Set up the development environment and install required dependencies.
- Create the basic web or desktop app structure.
2. **<ins>YouTube Audio Conversion</ins>:**
- Implement code to fetch and download YouTube audio using FFmpeg for audio conversion.
3. **<ins>Metadata Editing</ins>:**
- Develop a user interface to edit metadata manually.
- Integrate AI/ML libraries for automatic metadata generation.
4. **<ins>UI/UX Enhancement</ins>:**
- Design a user-friendly interface with proper error handling and progress indicators.
- Add support for batch processing and playlist downloads.
5. **<ins>Testing and Bug Fixing</ins>:**
- Perform thorough testing to identify and fix any bugs or issues.


<p align="right">(<a href="#yt">back to top</a>)</p>

---------------------

## Potential I/O Specifications

### Input: 
> - YouTube video link,
> - selected audio format,
> - destination folder,
> - optional metadata details.
>   
### Output: 
> - Converted audio file with selected format,
> - metadata-edited audio file.


### User Requirements/Permissions:
- Users should have access to YouTube to provide video links.
- Users may require appropriate permissions to read/write files in the selected destination folder.


### System Requirements/Permissions:
- Web App: Modern web browser with JavaScript enabled.
- Desktop App: Compatible with macOS and Windows operating systems.


<p align="right">(<a href="#yt">back to top</a>)</p>

---------------------


## Potential Enhancements (using AI/ML):

1. Implement AI/ML models to analyze audio content and automatically suggest appropriate metadata (artist, title, genre, et cetera).
2. Train models to identify the best possible audio format based on the video's content and user preferences.



<p align="right">(<a href="#yt">back to top</a>)</p>

---------------------

## Usage

### Potential Use Cases and Practical Applications:

DJs and music producers can use the application to download high-quality audio tracks with correct metadata for mixing.\
Musicians can convert YouTube music into lossless formats for sampling or studying.\
Users who prefer smaller file sizes can choose lossy formats for easy sharing and storage.


### User Installation Details and Prerequisites:
- Web App: No installation required; users access the app via a web browser.
- Desktop App: Users need to download and install the application for macOS or Windows.


<p align="right">(<a href="#yt">back to top</a>)</p>

---------------------

## Contributions

Contributions can help enhance the application, adding new features and improving performance.\
Donations can support server costs, API access, and incentivize continued development.


<p align="right">(<a href="#yt">back to top</a>)</p>

---------------------

## Conclusion

This program empowers users to easily convert and download YouTube audio tracks in their preferred audio formats, making it ideal for DJs, musicians, and music enthusiasts. 

The addition of AI/ML features streamlines the process, automating metadata retrieval and enhancing user experience. 


By providing a convenient and accessible tool, this project contributes to the seamless exploration and utilization of online audio content.
