# EncryptionDecryption with UI
 First hands on experience with Qt Creator and learning about how to properly Encrypt with a Key and utilize that key to decrypt the text file with using the same blocks

<!--StartFragment-->

Encryption Decryption Algorithm Project Guide

By Justin Lam


# Getting Started:

1. ### Download and Extract the File

- Download the zipped file that contains all the Sample tests and .exe

- Extract it to the folder that you desire

  - Right click the folder “**Encryption Decryption Project App with UI.zip**”

  - Select “**Extract All**”

  - Once in this screen:

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXeunIjqwYTZpDEsxMzctFzSdlsoaCGwp5ZawKt969f3n-dw0aZ7EDPG7nh5X9pgRRACEeOvubBqGT0az3dBg-pNCPiubv6GPFyq2MvDqdtBfJ0f-_xNYPhe30kJCfAoXsC_LIguuLin5ZUyal0CB6LvaOZQ?key=KtdHvqRMgoTr1IqnIswhNw)

  - Click “**Extract**”

2. ### Launching the Program

- Inside the extracted folder, go to the “**EncryptDecrypt\_application**” folder

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXeAFnZd08kZQ0Y0TBQltOPaG67bDvXZhHRnNFJFFpMQ7eo2R-Jt72pScrIWEgO-Fa1DCCTBEmB08I9XkoCHlgffmoaHyLOMfpu-khz-jHDn7FnTwOcjA0iEJzMLcE0PcuQRH0uGNNlWAEX0fTpBH7WJ8Nyz?key=KtdHvqRMgoTr1IqnIswhNw)



- Within that folder, locate the file named “**EncryptionDecryptionUI.exe**”

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXerarBEsDMVFnQyxtMdZSQKXw7clu0qKmi6xc4jPa07t6KS5kqjszxCIRpi60tUJVzYaaEyNcUvcRLhGgJmhjbWtlczHt2lp3rS8fL8mUGnPIiiotKDwW4Z6Gi9qTtunjKvDfJm-sywSDAIM2dZt3Bgsbio?key=KtdHvqRMgoTr1IqnIswhNw)

- Open the file and it should open up to this

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXf8CxnIwxQ5tE9claUBYhZGti2dRWmnj4qtH3xFQQ7Ew4KWH5If1R8pWLGDLCWyzDiDby80eKVN2hm64QUcRD3Ol-OwrizfQL8VYPKym7VcZDrWuWU4XfZholHw5sVps4DG-F9yNy9XdAmTELtEXyur2RdT?key=KtdHvqRMgoTr1IqnIswhNw)

- Once you are in this screen move to step 3! **IF NOT GO BACK TO STEP 1**


# Beginning Encryption:

3. ### Selecting the Input File

- **_Note_**: This is where things can get tricky be sure to follow the guide _exactly_ here

- Where it says “**Input File Path here**” you can listen to the text at the top that says “Drag and Drop the file! (or the input path)”

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXcRWuFKiIc7wvjy-kQvmTb2JkoXB_2arKEfrKIeCCqps-ta6OSo_cbNk4Y402ifeHZa9SeoMKzN4OmTKAupbzzhkwSG2jWjjWs78bmZmfBW5j-fe1MVSzwVRcTuF_33xActTCU24Luxf8gomiyfdwHAAew?key=KtdHvqRMgoTr1IqnIswhNw)

- Where the arrow and red box is highlighted drop the path to your text file, so here go back to the first folder that contains the two folders “**Sample Tests**” and “**EncryptDecrypt\_application**”

- Select the “**Sample Tests**” and open it in another window


![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXd1kvxlMVbzNDv46o37tEozvlp0_EpXKKakuLe-h_19GHELqsZSnpkmXtcCoizhcYZJQavkv7pCRi8fEMYq6Rj5SHuf1573HxcmPNklyiMwwlDopOimxpcffhkbIP3YTtDousRfL54Uxay6VIZ0rasqXI98?key=KtdHvqRMgoTr1IqnIswhNw)

- Now go into the “**Test Case 1**” folder and you should see these files

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXfuXhP56CPBIOCgNwCq7SXwYLttWccjqZLjcsr-3ojl1VSB6ANiGbjpQO7tCqAq_MRMmy85w5EQIphUyphVbP8-rTKp1XnIYm3dSTK2j71FamhZti4pnfrgTgFanoQJc2xZuGxYL5uErGCL3aMSHdspoKs?key=KtdHvqRMgoTr1IqnIswhNw)


![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXer5RjxPD4f3Er0w8wfWk0j7BA_fMc4JPuW10WFlF0ZxaLWYOF__TsgT4WPyziwpqQcKJDu4ZknhwPcXP66Q9hutneShrZnlbELMRtEx1DpTvURhfGqbxTEzUU9sY-ggXL4JXRmkHnSm0v0LPO2Zhpo-Eq-?key=KtdHvqRMgoTr1IqnIswhNw)


- Now you can either “drag and drop” the text file that says “textThatNeedsEncryption.txt” or you can copy its path, here is how to do both ways respectively

**DRAG AND DROP:**

- To “drag and drop” the file, you must simply drag with your cursor and drop it into the window


![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXfkb9UOcFcvbuX8Z3V5vutczSYGkVEIVIHvyTYmVvvMFWkvyEqmrTaReA3Tpn8VCnOhGerE4mlYdfPAjh_3ibJnIH6_7qcMBNLCH0YbcsbKn6WlHIYaZmN9y_QkBOvgoI3ooMRx4NDxoil_y12QP9l-_81U?key=KtdHvqRMgoTr1IqnIswhNw)\


- When dropped into the window it will look like this:

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXdlfwbFP0Lx4mlbiz1KK2i-MDLZ6FKninhuEjuU-8V77gGjR7g9D_f7_lzwKa6SMiPYG1SB-3YseujTr7muwy33Ai26hup7TbiWGSTWuvKMU9S9RJQ_8jlViACCZIp6p9hUFNsDn14ecm5C84F-MISHehFL?key=KtdHvqRMgoTr1IqnIswhNw)

- Where it is underlined, delete it. So it should look like “**C:/Users/justi/Downloads/Encryption Decryption Project App with UI/Sample Tests/Test Case 1/textThatNeedsEncryption.txt**” instead of “**file:///C:/Users/justi/Downloads/Encryption Decryption Project App with UI/Sample Tests/Test Case 1/textThatNeedsEncryption.txt**”

  - This is mainly to correct the directory to the file since the code cannot read the initial part

- **Once past this step you can move onto step 4**

**COPYING THE PATH OF THE FILE:**

- If you do decide to get the path of the file, just right click the file instead and select “**Copy as path**” or on most systems **Ctrl + Shift + C**

****![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXeAt_0rPwhAKgOqLNckiw77lud8ZP5UEMeW-hNBDjuM5E0lbBYiUtqGTd_sDSZT4L3w_euDxsBN5bckps26QrLGpYhmVyC5aIN-rJg7GCBsA_Zu8fvnKDQ9lrVylXWPiB8anh3I0jPr0casyCFuFiLjINs?key=KtdHvqRMgoTr1IqnIswhNw)****

- Then with that go back to the window and paste in the path with **Ctrl + V**

- **It should look like this:**

****![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXdlesuNlfc8wXvA__LLuWNqZb2vvAuSC5ggX1wATbdQ3ldPYMpGlUE3VFzsCWHY4srgJ4sZzFjJcC_B2zOCWR5kopr3FsFcad1cAGfLLyRLrd-wabvfbkHwpaZWsSuKROkKhmwZsUQFwoWLPeRZYq95DETw?key=KtdHvqRMgoTr1IqnIswhNw)****

- **Now we can move onto step 4**

4. ### Selecting the Block Size and Generating a Key

- For this step we can select the block size to be in “4s” so you can choose the block size to be 4, 8, 12, 16, 32, 64, or even 1024, it is up to you.

- In this example we will use 4 to start…

- Keep in mind that you must remember what block size you put, hence why there is also a file named “**Block size.txt**” for future reference in the test case folder

- Below is what it will look like when inputted

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXeA6aE36bzmlj2Yrb7qmJNA5Jjl3wCt2R9w4P8CZnZ8yBVkjEgprxIOPjETvCqY_-Vhtpsiv_ZU7djvcZkggZIlJ-TCGiKhu9F6WgUkD3OLWDOcJG2WKhIkumBqLzdLywb5nGhcYW30yoAa-7jjIctxQBJg?key=KtdHvqRMgoTr1IqnIswhNw)

- Here we are choosing to ignore the “**Generate key**” so that it may randomly generate any 16 character key for us, or you can click the “**Generate Key**” button to create one

  - When “Generating a key” it will create a key for us but will not yet save it.

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXcKhiZ7947KPgvlvhGdZ3TDzFxkxuKYtRd6GWuEYIACYvxEhHxQhvGdKrX-LGGyVIxjpWzpMiy4t0-R4AV30bHzoJnrbcDJV8GQHhQhnlaqbviVyslOkBN7mVTWJqK-eFavnLWNMpxSLD6SOAkd4ErReC7M?key=KtdHvqRMgoTr1IqnIswhNw)

- Now let us move onto step 5

5. ### Selecting/Creating the Output File Path

- Here we are going to be making a output file path, so we can choose the name to be whatever we want and location, but for this specific example we are going to use the name “**encrypted**”, and choose it in the same folder as our Test Case 1

- With that in mind you can copy and paste the path from above the key and paste that into the Output path, only renaming the things before **.txt** and after “**Test Case 1/**”

1. Copy the path from the input

2. Paste the path onto the bottom “**Output File**” renaming it to your desired name, in this case “**encrypted**” because we are encrypting the file

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXeV-3ldsWVdmA-bpLxLcczMY9qzGegnJJ0qZbi75AyYCFHT13sHuv6v2ld5MHq2xbRK71GCdiZPW8PRB4BZtc8UkcJvTiG5GQM7ZKf-jRr-PbiI6GMcP3D7N96h0uW91Iy3k7GFH0eoFIIsvdbUsTlf6qtc?key=KtdHvqRMgoTr1IqnIswhNw)

- Now you can select “**Encrypt**” and you now have an encrypted file with the key saved to the same location!

- There should be a pop out screen telling you that you have successfully encrypted the file, and that a key has been saved to the designated location alongside that file

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXeBdYfcawv9TqXFI8CraL-O3JaOhKEVJjevREtJ4jE0jec_mjUVe1mes8Ra_oPtYEV4a1J0A6MWJMm2se3yqclMeArhJs7sRswvSCLJSEpTh0YRIFJFc5RfxgdmGHU1Jkf3BBBNHrLk16JGcpQL4Gca20_z?key=KtdHvqRMgoTr1IqnIswhNw)


- If you navigate back to our “**Test Case 1**” folder, you will find two .txt files that have replaced your “**encrypted.txt**” and “**key.txt**”

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXcTMfJk9wkAIIxSqxOKYnRKWE9Vw8IEEwZ0oePahUiOlYbwoYgTZdwSAhB9-jST1z55kmgPVSQJhX_3Lh2B-bJEb2EMLEnhEBbWJLnEqR2FeuW6zGvO2EMk3RTPuSrGNP7geyrE8jLP2AbjDjBUEzDcPxVG?key=KtdHvqRMgoTr1IqnIswhNw)

- Now with our newly generated key and “**encrypted.txt**” if you open “encrypted.txt” it should showcase cipher text like this:

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXcPYFis8hmnpSAmKIzuPbTwjIsfVqdyNMP7e7feV4w3hHDNHjSeqPWgOMkqD5EQBoFAKbF16k9Cvm9FVsD5yy042hw7zireABbNQrxgCJ75ST2NFbz6Gztzmpgfn5tVs3w4DVznczrjeH4nCfYUhfhpkoE?key=KtdHvqRMgoTr1IqnIswhNw)

- And alongside this encrypted file you also have your “**key.txt”** which if you open should showcase exactly like what you see in your window (keys may or may not be similar due to random generation):


![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXd3vR4M1f__rNNtukIPW1CSlROf9e85R3YEEMKJWmXhxLFhtbnkaq957OB09OT8udDtPDSLssJncM-bLoGqRW0WOxbfFujJDnTIL3ruKXbj0bVrrP-IkOBtIWRX4_yayOInRGAtxXfAk6va3Ttp6c0XkWzR?key=KtdHvqRMgoTr1IqnIswhNw)


# Beginning Decryption

6. ### Reselecting the Input File

- Now in order to decrypt your encrypted file you must copy the path location to the “**encrypted.txt**”, so you can simply delete the input file and copy and paste the output file path into the input file path:

1. Delete the input file path
   
2. Copy the output file path
   
3. Paste the output file path into the input file path

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXcIoTMWg397_dcCtLgffMqHhVu2QFRYPC2bWkpOEaxTXwrL8tuxcJRk90VdFg2e7bFVxoBI6Qx7UKCjT3sYoI19Ir0KbaMGO8sjAjKKhzsXnqXcOg0VL9SP47Fb8B-xOMZhmAgiUCudpUZrSC3C-ezHrpw?key=KtdHvqRMgoTr1IqnIswhNw)

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXd0-AQ4PKEykreh0z4SvJxfsD002Oie33qTlYZ0k5qsvqbJDnG5VzgYafp7Z1j-T3KjzMLdQ0Kgbs5FisqkzVXiVhrxJBvyk4sfkIqGrMvOk-M3w0GN-0ZGI6MWQ2J0TjDLCmozIzynVay4xPt3-9K4cAiu?key=KtdHvqRMgoTr1IqnIswhNw)

**Note**: Now that we have the input file path, we just need to create a new output file path

7. ###  Reselecting the Block Size and Key

- If you have accidentally generated a new key, no need to worry, just delete the key and “drag and drop” the “**key.txt**” file into the empty space that says “**Key Goes Here!**”

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXc7lq1MelIWSdyVrxH9aN4FDd9k-NA_VzFhXCWMcZJA-XlQtFXLfPkeNVUc_VXQxNq5_5bcoseI1wavJ_FKj6uM8MlMFblLDs-yBollWr0xkicl8zR6CgJ1gbIiKhpb1Ywnv4D4PRy_5bM-kxXiGFQvcwqo?key=KtdHvqRMgoTr1IqnIswhNw)

- Be sure to remove the “**file:///**” in front of the directory so that it could read the “**key.txt**” file

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXc15FtnlHJ22ch3qQWBhuF6VzJNl_xi0UPi1blyhKdVwwnlOhAvo9IAiv1snbR9ahSAss-NH-rSI1HNCacVjAbYDRVdDQ2jMkC_DxDViDc5OKaA1bGCB_jF2nUnJtXl1-TheZpv8b1DvZoac8ho0HzjnksY?key=KtdHvqRMgoTr1IqnIswhNw)

- **Note**: If you have kept the block size on a separate piece of paper you can always refer back to it and rewrite it as needed if you also accidentally close out of the application. Of course you can always brute force if you must, if you do end up losing the block size (remember multiples of 4).

- Otherwise we are finally ready to move onto step 8.

8. ### Creating a New Output File Path

- Now that we have come this far, we can repeat the same process we had when selecting a new output path. This time the key will not go with you, as you will only get the message that was originally encrypted.

- So, in this case we are going to leave the location as is for simplicity, but we are going to change just the name from “**encrypted.txt**” to “**decrypted.txt**” so it will look like this:

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXdKaf3u0tWNmyi9x-C2K0FRBj5QEB9RwzU6DjJBH22KlX7JOHLICVw5i-G6aCy2avDtd4zKRvXbsXRxb6xEqxGfhAqXLTqXTKJsykjze-WS9xVaT3benqqFmxeVLLFg6Nzz3sWyANHJ34lEWShokRltXi-4?key=KtdHvqRMgoTr1IqnIswhNw)

- Now simply press “**Decrypt**” and you have successfully decrypted your message!

- It will have a popout screen with “Success” and the actual information text stating “File has decrypted successfully!”, you may select **OK** to close the window out.

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXc3ialwu3OSQIHnQUk1tggrONu3hbDZzroISxc9R6WGwoxgrj4Ugq4Ow1bY-17QHOjlDlI5W94oOCsqYljqERQAA2k8j40A1amVGT4eFdgB5T4oblcxM-sbl5hA4Ba6JlLnZZ0stwc2IEFYNlXM24raRN4z?key=KtdHvqRMgoTr1IqnIswhNw)

- Now if you go back to your “**Test Case 1**” folder you will see the “**decrypted.txt**” and now be able to open it and see that it showcases the original message that needed to be encrypted!

- Have fun experimenting with the encryption!

# Some Things to Note #

Make sure block sizes are the same, so if you encrypt with 16 blocks you have to decrypt with 16 blocks, if you encrypt with 4 blocks, it has to also be 4 blocks that you also decrypt with.

Make sure paths are exact with no “file///” in front, has to be “D:\whatever” not “file\\\\\D:\whatever” in order for the encryption and decryption to work

**DO NOT LOSE THAT KEY OR THAT FILE CANNOT BE DECRYPTED WITHOUT** 

**SAME WITH BLOCK SIZE REMEMBER HOW MANY OR WRITE IT DOWN IN ANOTHER FILE (this one you can brute force it may just be a while)**

Make sure to put a legitimate generated key, a key that you make up will most likely not work - haven’t been able to check but once out of every so often it would work when I experimented

Auto generates a key if you do not have a key when encrypting. If you want, you could generate a key, it will also create a different key if you do not like the key provided

Key file is always saved as “key.txt” and saved into the same folder as the encrypted file

KEY HAS TO BE 16 CHARS

Also it WILL overwrite files with the same name so be careful upon naming it and placing it in certain locations

In the provided test cases i also stated the block size used to test

<!--EndFragment-->
