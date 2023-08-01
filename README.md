<a name="yt"></a>

# ytconv3rt3r

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
    <li><a href="#feat">Key Features</a></li>
    <li>
      <a href="#tech">Technologies and Programming Languages</a>
      <ul>
        <li>
          <a href="#web">Web Application</a>
          <ul> 
            <li><a href="wstack">Tech Stack</a></li>
            <li><a href="wIDE">Recommended IDEs</a></li>
          </ul>
          <li><a href="#desk">Desktop Application</a></li>
          <ul>
            <li><a href="dstack">Tech Stack</a></li>
            <li><a href="dIDE">Recommended IDEs</a></li>
          </ul>
          <li><a href="devenv">Development Environment</a></li>
        </li> 
      </ul>
    </li>
    <li>
      <a href="#map">Roadmap</a></li>
      <ul>
        <li><a href="est">Time Estimate</a></li>
      </ul> 
    </li>
    <li><a href="#uiux">UI/UX Implementation Details</a></li>
    <li><a href="#flow">Basic Workflow Guide</a></li>
    <li><a href="#impl">Project Implementation Guide</a></li>
    <li>
      <a href="io">Potential I/O Specifications</a>
      <ul>
        <li><a href="#i">Input</a></li>
        <li><a href="#o">Output</a></li>
        <li><a href="#sys">System Requirements</a></li>
        <li><a href="#user">User Requirements</a></li>
      </ul>
    </li>
    <li><a href="#plus">Future Enhancements</a></li>
    <li>
      <a href="usage">Usage</a>
      <ul>
        <li>
          <a href="start">Getting Started</a></li>
          <ul>
            <li><a href="install">User Installation Details</a></li>
            <li><a href="prereq">Prerequisites</a></li>
          </ul>
        </li>
        <li><a href="use-case">Potential Use Cases</a></li>
        <li><a href="appl">Practical Applications</a></li>
      </ul>
    </li>
    <li><a href="give">Contributions</a></li>
    <li><a href="bye">Conclusion</a></li>
    <li><a href="#lic">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#ack">Acknowledgments</a></li>
  </ol>
</details>
      
  

---------------------------

<a name="view"></a>
## Project Overview 

`ytconv3rt3r` is a versatile and user-friendly application that allows users to convert and download YouTube audio tracks into various audio file formats &mdash; including uncompressed audio (WAV), lossless compression (M4A), and lossy compression (MP3). 

Users will have the option to edit metadata for each audio track &mdash; including artist, title, genre, and other relevant details (which is especially crucial for users who use mixing/DJing software like `RekordBox` or `Serato`). 

&nbsp;
> - To enhance the user experience, an AI/ML-enhanced version of the project will be developed, which will automatically source and generate the correct metadata for each YouTube link.
>   
> - Additionally, users can edit metadata for each audio track, with the option of AI/ML assistance for automatic metadata retrieval or generation. 

&nbsp;

The project aims to cater to both web and desktop users, supporting both macOS and Windows operating systems.


<a name="obj"></a>
### <ins>Objectives</ins>

1. Provide users with a seamless and intuitive way to convert and download YouTube audio tracks into various audio formats.
2. Allow users to edit metadata for each audio track, manually or with AI/ML assistance.
3. Develop an AI/ML model to automatically fetch or generate metadata for improved user experience.
4. Support both web and desktop applications to cater to a broader user base.
5. Ensure cross-platform compatibility for the desktop app, supporting macOS and Windows operating systems.

   
<p align="right">(<a href="#yt">back to top</a>)</p>


---------------------

<a name="feat"></a>
## Key Features


<p align="right">(<a href="#yt">back to top</a>)</p>

---------------------

<a name="tech"></a>
## Technologies and Programming Languages

<a name="web"></a>
### Web Application

<a name="wstack"></a>
#### **<ins>Tech Stack</ins>:**
>
> #### **Version 1**
>> - __<ins>Front-end</ins>: (*User Interface*)__ `React.js` or `Vue.js`
>> - **<ins>Back-end</ins>:** `Node.js` with `Express.js`
>> - **<ins>Libraries and APIs</ins>:** YouTube Data API, `FFmpeg` for audio conversion, AI/ML libraries (optional)
>
> #### **Version 2**
>> 1. __<ins>Front-end</ins>: (*User Interface*)__
>>> - `Angular`: A popular framework for building robust web applications.
>>> - `Ember.js`: A framework for creating ambitious web applications with a strong focus on convention over configuration.
>>> - `Svelte`: A lightweight framework that compiles components to highly optimized vanilla JavaScript.
>>
>> 2. **<ins>Back-end</ins>:**
>>> - `Ruby on Rails`: A powerful and beginner-friendly framework for building web applications using the Ruby programming language.
>>> - `Django`: A high-level Python web framework that promotes rapid development and clean, pragmatic design.
>>> - `Flask`: A lightweight and flexible Python web framework that provides the essentials for building a web application.
>>
>> 3.  **<ins>Libraries and APIs</ins>:**
>>> - `FFmpeg.js`: A pure JavaScript port of FFmpeg for client-side audio conversion.
>>> - `axios`: A promise-based HTTP client for making API requests.
>>> - `MusiXmatch API`: For accessing music metadata, lyrics, and other related data.

<a name="wIDE"></a>
#### **<ins>Recommended IDEs</ins>:**
>
> 1. __<ins>Front-end</ins>: (*User Interface*)__
>>   - **<ins>Visual Studio Code</ins>:** A popular and lightweight code editor with strong community support and numerous extensions for `Angular`, `Ember.js`, and `Svelte` development.
>>   - **<ins>WebStorm</ins>:** A powerful IDE specifically designed for web development with excellent support for `Angular`, `Ember.js`, and `Svelte`.
>
> 2.  **<ins>Back-end</ins>:**
>>   - **<ins>Visual Studio Code</ins>:** An excellent choice for back-end development with `Ruby on Rails`, `Django`, and `Flask` due to its versatility and extensive plugin support.
>>   - **<ins>PyCharm</ins>:** A specialized IDE for Python development that provides advanced tools for working with `Django` and `Flask` projects.
&nbsp;
<p align="right">(<a href="#yt">back to top</a>)</p>

---------------------

<a name="desk"></a>
### Desktop Application

<a name="dstack"></a>
#### **<ins>Tech Stack</ins>:**
> #### **Version 1**
>> - __<ins>Front-end</ins>: (*User Interface*)__ `Electron.js` for cross-platform compatibility
>> - **<ins>Back-end</ins>:** `Node.js` with `Express.js` (for handling API requests)
>> - **<ins>Libraries and APIs</ins>:** YouTube Data API, `FFmpeg` for audio conversion, AI/ML libraries (optional)
>
> #### **Version 2**
>> 1. __<ins>Front-end</ins>: (*User Interface*)__
>>> - `React Native`: A framework for building cross-platform mobile applications with `React.js` components.
>>> - `Flutter`: A UI toolkit for building natively compiled applications for mobile, web, and desktop from a single codebase.
>> 2. **<ins>Back-end</ins>:**
>>> - `Flask`: A lightweight and flexible Python web framework that can also be used for desktop app back-end functionality.
>>> - `.NET Core`: A cross-platform, open-source framework for building modern applications for Windows, macOS, and Linux.
>> 3.  **<ins>Libraries and APIs</ins>:**
>>> - `Electron Forge`: A complete toolchain to package and distribute `Electron.js` applications.
>>> - `Node.js child_process module`: For running `FFmpeg` and other command-line utilities.
>>> - `Spotify Web API`: For accessing music metadata and related information.
 
<a name="dIDE"></a>
#### **<ins>Recommended IDEs</ins>:**
> 1. __<ins>Front-end</ins>: (*User Interface*)__
>>   - <ins>Visual Studio Code</ins>: A versatile code editor suitable for `React Native` development with its wide range of extensions and `React Native`-specific tooling.
>>   - <ins>IntelliJ IDEA</ins>: A robust IDE from JetBrains that supports `Flutter` development and offers powerful code analysis and debugging tools.
> 2. **<ins>Back-end</ins>:**
>>   - <ins>Visual Studio Code</ins>: Can be used for back-end development with `Flask` and `.NET Core`, providing a lightweight and efficient development environment.
>>   - <ins>Visual Studio</ins>: A comprehensive IDE for Windows desktop app development with `.NET Core` and `C#`.



&nbsp;

Remember that some IDEs may offer better integration and support for specific tech stacks, so it's essential to explore and choose the one that fits your workflow and personal preferences.

Additionally, some IDEs may have community or professional editions, so be sure to consider your project's budget and needs when making a decision.

&nbsp;

<a name="devenv"></a>
### Development Environment:

> - **Operating System:** macOS Ventura *(version 14.3.1)*
> - **Architecture:** Apple arm64


<p align="right">(<a href="#yt">back to top</a>)</p>

---------------------

<a name="map"></a>
## Roadmap

 - [ ]  __<ins>Phase 1</ins>: Project Setup and Basic Conversion Functionality (*3-4 weeks*)__
>  - [ ] Set up the development environment and select the tech stack.
>  - [ ] Implement the basic front-end and back-end structure for the web app or desktop app.
>  - [ ] Enable users to input YouTube video links and select desired audio formats (WAV, M4A, MP3).
>  - [ ] Develop functionality to convert and download YouTube audio tracks into WAV format.
>  - [ ] Set up the project structure, implement basic web or desktop app functionality to convert YouTube audio to WAV format, and allow user-selected location for file saving.
     
   
 - [ ]  __<ins>Phase 2</ins>: Expanding Audio Formats and Manual Metadata Editing (*4 weeks*):__ 
>  - [ ] Add support for lossless compression (M4A) and lossy compression (MP3) formats.
>  - [ ] Allow users to choose the destination folder for the downloaded audio files.
>  - [ ] Implement a user interface for manual metadata editing, enabling users to modify artist, title, genre, and other details.
     
        
- [ ]  __<ins>Phase 3</ins>: AI/ML Integration and Advanced Features (*6 weeks*)__
>  - [ ] Research, train, and integrate AI/ML models to automatically fetch or generate metadata for audio tracks.
>  - [ ] Enhance the UI/UX design for a more intuitive and visually appealing user experience.
>  - [ ] Add advanced features, such as batch processing and playlist support for converting multiple YouTube audio tracks simultaneously.
     
        
- [ ] __<ins>Phase 4</ins>: Testing, Bug Fixing, and Performance Optimization (*4 weeks*)__
>  - [ ] Conduct thorough testing to identify and address any bugs or issues.
>  - [ ] Optimize the application for performance and scalability.
>  - [ ] Address user feedback and implement necessary improvements.

      
- [ ] __<ins>Phase 5</ins>: Documentation and Deployment (*2 weeks*)__
>  - [ ] Prepare comprehensive documentation for users and developers, including installation guides and API references.
>  - [ ] Deploy the web app to a reliable server or hosting platform for public access.
>  - [ ] Package the desktop app as .dmg for macOS and installer for Windows.


<a name="est"></a>
### Time Estimate:
Considering the phases and development times mentioned above, the estimated time of completion for the entire `ytconv3rt3r` project is approximately 20 weeks (*5 months*). 

However, the timeline can be influenced by factors such as team size, resources, complexity of AI/ML integration, and any unforeseen challenges that may arise during development.
&nbsp;
**<ins>Note</ins>:** The timeline is a rough estimate and may vary depending on the specific circumstances and any additional features or enhancements you may decide to include during the development process.


It's essential to plan and allocate resources accordingly to ensure the project's successful completion.


<p align="right">(<a href="#yt">back to top</a>)</p>

---------------------

<a name="uiux"></a>
## UI/UX Implementation Details

The UI/UX should be intuitive and straightforward, featuring a simple input field for the YouTube video link and options for choosing the desired audio format and metadata editing. 

Users can choose between different audio formats and set the destination folder. 

Provide feedback on the conversion progress and allow users to view and edit metadata before downloading.



<p align="right">(<a href="#yt">back to top</a>)</p>

---------------------
<a name="flow"></a>
## Basic Workflow Guide

1. User inputs the YouTube video link and selects the desired audio format (WAV, M4A, or MP3).
2. The application fetches the video data using the YouTube Data API.
3. The video is downloaded in the selected format and saved to the user-specified location.
4. If the user chooses to edit metadata, they can manually input the details or use AI/ML assistance.
5. The final audio file with edited metadata is saved.


<p align="right">(<a href="#yt">back to top</a>)</p>

---------------------
<a name="impl"></a>
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
<a name="io"></a>
## Potential I/O Specifications

<a name="i"></a>
### Input: 
> - YouTube video link,
> - selected audio format,
> - destination folder,
> - optional metadata details.
>
<a name="o"></a>
### Output: 
> - Converted audio file with selected format,
> - metadata-edited audio file.

<a name="user"></a>
### User Requirements/Permissions:
> - Users should have access to YouTube to provide video links.
> - Users may require appropriate permissions to read/write files in the selected destination folder.

<a name="sys"></a>
### System Requirements/Permissions:
> - Web App: Modern web browser with JavaScript enabled.
> - Desktop App: Compatible with macOS and Windows operating systems.


<p align="right">(<a href="#yt">back to top</a>)</p>

---------------------

<a name="plus"></a>
## Future Enhancements (using AI/ML):

1. Implement AI/ML models to analyze audio content and automatically suggest appropriate metadata (artist, title, genre, et cetera).
2. Train models to identify the best possible audio format based on the video's content and user preferences.



<p align="right">(<a href="#yt">back to top</a>)</p>

---------------------
<a name="usage"></a>
## Usage

<a name="start"></a>
### Getting Started 

&nbsp;

<a name="use-case"></a>
### Potential Use Cases: 

&nbsp;

<a name="appl"></a>
### Practical Applications:

- DJs and music producers can use the application to download high-quality audio tracks with correct metadata for mixing.
- Musicians can convert YouTube music into lossless formats for sampling or studying.
- Users who prefer smaller file sizes can choose lossy formats for easy sharing and storage.

&nbsp;

<a name="install"></a>
### User Installation Details:
> - **Web App:**
>>  - No installation required; users access the app via a web browser.
> - **Desktop App:**
>>  - Users need to download and install the application for macOS or Windows.

&nbsp;

<a name="prereq"></a>
### Prerequisites:

<p align="right">(<a href="#yt">back to top</a>)</p>

---------------------
<a name="give"></a>
## Contributions

**<ins>How to help</ins>:**
> - *Contributions* can help enhance the application, adding new features and improving performance.
> - *Donations* can support server costs, API access, and incentivize continued development.


<p align="right">(<a href="#yt">back to top</a>)</p>

---------------------
<a name="bye"></a>
## Conclusion

This program empowers users to easily convert and download YouTube audio tracks in their preferred audio formats, making it ideal for DJs, musicians, and music enthusiasts. 

The addition of AI/ML features streamlines the process, automating metadata retrieval and enhancing user experience. 

By providing a convenient and accessible tool, this project contributes to the seamless exploration and utilization of online audio content.

<p align="right">(<a href="#yt">back to top</a>)</p>
---------------------

<a name="lic"></a>
<!-- LICENSE -->
## License

Distributed under the MIT License. See `LICENSE.txt` for more information.

<p align="right">(<a href="#yt">back to top</a>)</p>

---------------------------
<a name="contact"></a>
<!-- CONTACT -->
## Contact

Your Name - [@lyndskg](https://twitter.com/lyndskg) - lyndsey.gu@gmail.com

Project Link: [https://github.com/your_username/repo_name](https://github.com/your_username/repo_name)

<p align="right">(<a href="#yt">back to top</a>)</p>

---------------------------
<a name="ack"></a>
<!-- ACKNOWLEDGMENTS -->
## Acknowledgments

Use this space to list resources you find helpful and would like to give credit to. I've included a few of my favorites to kick things off!

* [Choose an Open Source License](https://choosealicense.com)
* [GitHub Emoji Cheat Sheet](https://www.webpagefx.com/tools/emoji-cheat-sheet)
* [Malven's Flexbox Cheatsheet](https://flexbox.malven.co/)
* [Malven's Grid Cheatsheet](https://grid.malven.co/)
* [Img Shields](https://shields.io)
* [GitHub Pages](https://pages.github.com)
* [Font Awesome](https://fontawesome.com)
* [React Icons](https://react-icons.github.io/react-icons/search)

> Put
> Shit
> Here

<p align="right">(<a href="#yt">back to top</a>)</p>



<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/othneildrew/Best-README-Template.svg?style=for-the-badge
[contributors-url]: https://github.com/othneildrew/Best-README-Template/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/othneildrew/Best-README-Template.svg?style=for-the-badge
[forks-url]: https://github.com/othneildrew/Best-README-Template/network/members
[stars-shield]: https://img.shields.io/github/stars/othneildrew/Best-README-Template.svg?style=for-the-badge
[stars-url]: https://github.com/othneildrew/Best-README-Template/stargazers
[issues-shield]: https://img.shields.io/github/issues/othneildrew/Best-README-Template.svg?style=for-the-badge
[issues-url]: https://github.com/othneildrew/Best-README-Template/issues
[license-shield]: https://img.shields.io/github/license/othneildrew/Best-README-Template.svg?style=for-the-badge
[license-url]: https://github.com/othneildrew/Best-README-Template/blob/master/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://linkedin.com/in/othneildrew
[product-screenshot]: images/screenshot.png
[Next.js]: https://img.shields.io/badge/next.js-000000?style=for-the-badge&logo=nextdotjs&logoColor=white
[Next-url]: https://nextjs.org/
