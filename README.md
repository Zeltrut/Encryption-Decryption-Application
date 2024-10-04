# EncryptionDecryption with UI
 First hands on experience with Qt Creator and learning about how to properly Encrypt with a Key and utilize that key to decrypt the text file with using the same blocks

<p style="color: red; font-weight: bold">>>>>>  gd2md-html alert:  ERRORs: 0; WARNINGs: 0; ALERTS: 20.</p>
<ul style="color: red; font-weight: bold"><li>See top comment block for details on ERRORs and WARNINGs. <li>In the converted Markdown or HTML, search for inline alerts that start with >>>>>  gd2md-html alert:  for specific instances that need correction.</ul>

<p style="color: red; font-weight: bold">Links to alert messages:</p><a href="#gdcalert1">alert1</a>
<a href="#gdcalert2">alert2</a>
<a href="#gdcalert3">alert3</a>
<a href="#gdcalert4">alert4</a>
<a href="#gdcalert5">alert5</a>
<a href="#gdcalert6">alert6</a>
<a href="#gdcalert7">alert7</a>
<a href="#gdcalert8">alert8</a>
<a href="#gdcalert9">alert9</a>
<a href="#gdcalert10">alert10</a>
<a href="#gdcalert11">alert11</a>
<a href="#gdcalert12">alert12</a>
<a href="#gdcalert13">alert13</a>
<a href="#gdcalert14">alert14</a>
<a href="#gdcalert15">alert15</a>
<a href="#gdcalert16">alert16</a>
<a href="#gdcalert17">alert17</a>
<a href="#gdcalert18">alert18</a>
<a href="#gdcalert19">alert19</a>
<a href="#gdcalert20">alert20</a>

<p style="color: red; font-weight: bold">>>>>> PLEASE check and correct alert issues and delete this message and the inline alerts.<hr></p>



## Encryption Decryption Algorithm Project Guide

By Justin Lam

CWID: 886399013

justinlam0624@csu.fullerton.edu


## Getting Started:



1. Download and Extract the File
* Download the zipped file that contains all the Sample tests and .exe
* Extract it to the folder that you desire
    * Right click the folder “**Encryption Decryption Project App with UI.zip**”
    * Select “**Extract All**”
    * Once in this screen: \


<p id="gdcalert1" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image1.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert2">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image1.png "image_tooltip")

    * Click “**Extract**”
2. Launching the Program
* Inside the extracted folder, go to the “**EncryptDecrypt_application**” folder
* Within that folder, locate the file named “**EncryptionDecryptionUI.exe**”

        

<p id="gdcalert2" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image2.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert3">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image2.png "image_tooltip")


* Open the file and it should open up to this



<p id="gdcalert3" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image3.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert4">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image3.png "image_tooltip")




* Once you are in this screen move to step 4! IF NOT GO BACK TO STEP 1


## Beginning Encryption:



3. Selecting the Input File
* <span style="text-decoration:underline;">This is where things can get tricky be sure to follow the guide *exactly *here</span>
* Where it says “**Input File Path here**” you can listen to the text at the top that says “Drag and Drop the file! (or the input path)”



<p id="gdcalert4" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image4.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert5">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image4.png "image_tooltip")




* Where the arrow and red box is highlighted drop the path to your text file, so here go back to the first folder that contains the two folders “**Sample Tests**” and “**EncryptDecrypt_application**”
* Select the “**Sample Tests**” and open it in another window



<p id="gdcalert5" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image5.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert6">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image5.png "image_tooltip")




* Now go into the “**Test Case 1**” folder and you should see these files
* Now you can either “drag and drop” the text file that says “textThatNeedsEncryption.txt” or you can copy its path
    * To “drag and drop” the file, you must simply drag with your cursor and drop it into the window



<p id="gdcalert6" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image6.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert7">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image6.png "image_tooltip")




    * When dropped into the window it will look like this:



<p id="gdcalert7" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image7.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert8">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image7.png "image_tooltip")




    * Where it is <span style="text-decoration:underline;">underlined</span>, delete it. So it should look like “**C:/Users/justi/Downloads/Encryption Decryption Project App with UI/Sample Tests/Test Case 1/textThatNeedsEncryption.txt**” instead of “**file:///C:/Users/justi/Downloads/Encryption Decryption Project App with UI/Sample Tests/Test Case 1/textThatNeedsEncryption.txt**”
        * This is mainly to correct the directory to the file since the code cannot read the initial part
    * **<span style="text-decoration:underline;">Once past this step you can move onto step 4</span>**
    * If you do decide to get the path of the file, just right click the file instead and select “**Copy as path**” or on most systems** Ctrl + Shift + C**



<p id="gdcalert8" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image8.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert9">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image8.png "image_tooltip")




    * Then with that go back to the window and paste in the path with **Ctrl + V**
    * **It should look like this:**



<p id="gdcalert9" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image9.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert10">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image9.png "image_tooltip")




* Now we can move onto step 4
4. Selecting the Block Size and Generating a Key
* For this step we can select the block size to be in “4s” so you can choose the block size to be 4, 8, 12, 16, 32, 64, or even 1024, it is up to you.
* In this example we will use 4 to start…
* Keep in mind that you must remember what block size you put, hence why there is also a file named “**Block size.txt**” for future reference in the test case folder
* Below is what it will look like when inputted



<p id="gdcalert10" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image10.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert11">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image10.png "image_tooltip")




* Here we are choosing to ignore the key so that it may randomly generate any 16 character key for us, or you can click “**Generate Key**”



<p id="gdcalert11" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image11.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert12">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image11.png "image_tooltip")




* Now let us move onto step 5
5. Selecting/Creating the Output File Path
* Here we are going to be making a output file path, so we can choose the name to be whatever we want and location, but for this specific example we are going to use the name “**encrypted**”, and choose it in the same folder as our Test Case 1
* With that in mind you can copy and paste the path from above the key and paste that into the Output path, only renaming the things before **.txt** and after “**Test Case 1/**”
1. Copy the path from the input
2. Paste the path onto the bottom “**Output File**” renaming it to your desired name, in this case “**encrypted**” because we are encrypting the file



<p id="gdcalert12" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image12.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert13">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image12.png "image_tooltip")




* Now you can select “**Encrypt**” and you now have an encrypted file with the key saved in your folder!
* There should be a pop out screen telling you that you have successfully encrypted the file, and that a key has been saved to the designated location alongside that file
* Now with our newly generated key and “**encrypted.txt**” if you open “encrypted.txt” it should showcase cipher text like this:



<p id="gdcalert13" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image13.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert14">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image13.png "image_tooltip")




* And alongside this encrypted file you also have your “**key.txt”** which if you open should showcase exactly like what you see in your window (keys may or may not be similar due to random generation):



<p id="gdcalert14" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image14.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert15">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image14.png "image_tooltip")



## Beginning Decryption



6. Reselecting the Input File
* Now in order to decrypt your encrypted file you must copy the path location to the “**encrypted.txt**”, so you can simply delete the input file and copy and paste the output file path into the input file path:
1. Delete the input file path
2. Copy the output file path
3. Paste the output file path into the input file path



<p id="gdcalert15" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image15.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert16">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image15.png "image_tooltip")




<p id="gdcalert16" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image16.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert17">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image16.png "image_tooltip")




* Now that we have the input file path, we just need to create a new output file path
7.  Reselecting the Block Size and Key
* If you have accidentally generated a new key, no need to worry, just delete the key and “drag and drop” the “**key.txt**” file into the empty space that says “**Key Goes Here!**”



<p id="gdcalert17" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image17.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert18">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image17.png "image_tooltip")




* Be sure to remove the “**file:///**” in front of the directory so that it could read the “**key.txt**” file



<p id="gdcalert18" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image18.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert19">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image18.png "image_tooltip")




* If you have kept the block size on a separate piece of paper you can always refer back to it and rewrite it as needed if you also accidentally close out of the application. Of course you can always brute force if you must, if you do end up losing the block size (remember multiples of 4).
* Otherwise we are ready to move onto step 8.
8. Creating a new Output File Path
* Now that we have come this far, we can repeat the same process we had when selecting a new output path. This time the key will not go with you, as you will only get the message that was originally encrypted.
* So, in this case we are going to leave the location as is for simplicity, but we are going to change just the name from “**encrypted.txt**” to “**decrypted.txt**” so it will look like this:



<p id="gdcalert19" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image19.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert20">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image19.png "image_tooltip")




* Now simply press “**Decrypt**” and you have successfully decrypted your message!
* It will have a popout screen with “Success” and the actual information text stating “File has decrypted successfully!”, you may select **<span style="text-decoration:underline;">OK </span>** to close the window out.



<p id="gdcalert20" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image20.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert21">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image20.png "image_tooltip")




* Now if you go back to your “**Test Case 1**” folder you will see the “**decrypted.txt**” and now be able to open it and see that it showcases the original message that needed to be encrypted!
* Have fun experimenting with the encryption!


## Some Things to Note

Make sure block sizes are the same, so if you encrypt with 16 blocks you have to decrypt with 16 blocks, if you encrypt with 4 blocks, it has to also be 4 blocks that you also decrypt with.

Make sure paths are exact with no “file///” in front, has to be “D:\whatever” not “file\\\D:\whatever” in order for the encryption and decryption to work

**DO NOT LOSE THAT KEY OR THAT FILE CANNOT BE DECRYPTED WITHOUT** 

**SAME WITH BLOCK SIZE REMEMBER HOW MANY OR WRITE IT DOWN IN ANOTHER FILE (this one you can brute force it may just be a while)**

Make sure to put a legitimate generated key, a key that you make up will most likely not work - haven’t been able to check but once out of every so often it would work when I experimented

Auto generates a key if you do not have a key when encrypting. If you want, you could generate a key, it will also create a different key if you do not like the key provided

Key file is always saved as “key.txt” and saved into the same folder as the encrypted file

KEY HAS TO BE 16 CHARS

Also it <span style="text-decoration:underline;">WILL</span> overwrite files with the same name so be careful upon naming it and placing it in certain locations

In the provided test cases i also stated the block size used to test

If you read this far down I hope this project satisfies if at all possible anything… Took me a long time to create and was probably the most i’ve learned 
