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

  - Once in this screen:\
    ![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXc2JYrcbhndX0eASgNK6z3d-hkUBtURPX6HV_DVsvGGfrutHV6egJyhKVOfRY8ttPEfp_nMG5sN19OCDTPmTOFdlgsF25DJWfAmeTMLZNYJWI_bT4biWfefmBiujg9LcoD7bYMA4RzjiIEa5CcsDAfX_QtJ?key=KtdHvqRMgoTr1IqnIswhNw)

  - Click “**Extract**”

2. ### Launching the Program

- Inside the extracted folder, go to the “**EncryptDecrypt\_application**” folder![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXc26f6SfZfqr4j9c57U6i1ChwJbaUb1_S37i9oOeP_23vPU6vB1hl5KDIRewbaEdSdo1llU85kM_pvhr0oszqaps4NcYsuj5j0EqlV5ijdOg--SW1uWCs_dILnfPkH28GilCM7uq8QJm1zfKsLLNgMMCLuI?key=KtdHvqRMgoTr1IqnIswhNw)

\
\


- Within that folder, locate the file named “**EncryptionDecryptionUI.exe**”

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXeKdBUQu6U2H9U7Vu2313-ofVBfegB6vqqwB_huYyXN72-QgTjzFOmRVZEzNSnpYYv-ioQEeBV2z9gc8uZb3_lrn5jEUeDxVmFh9xHryQcI--uNIxXqcgeO5hJr7buIIED39U9-9t7YuRMpwd9OX6cILJSU?key=KtdHvqRMgoTr1IqnIswhNw)

- Open the file and it should open up to this

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXf37gAQSo8SZgl6qxQoyPfuOrBvI7x8xNgpPIQRZUAeiHgkNA5QCzQSbwpc-DVrMtGbp643ftcdmoMypWdIvEIXjExtjlP4tCQ99Zo6oy29BUPhnfa205tD57_TaHhwLlBJyjViWKpUbuictrsBv9SYzgXN?key=KtdHvqRMgoTr1IqnIswhNw)

- Once you are in this screen move to step 4! IF NOT GO BACK TO STEP 1


# Beginning Encryption:

3. ### Selecting the Input File

- This is where things can get tricky be sure to follow the guide _exactly_ here

- Where it says “**Input File Path here**” you can listen to the text at the top that says “Drag and Drop the file! (or the input path)”

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXfU8w559tpnfoeHQwswcwIXyHLE74pmRkRe_aHCGhkMPJhcyGkZ1rDoFUfqesuP4AhR2LaVyxGv_ujfc85q7cdxdeyZ2MRkfMotOdXmfGLpKXYbSHkSc-b3-uTbZVSp_gXNvYc3daI8gC3zMBpOm4i-Dts?key=KtdHvqRMgoTr1IqnIswhNw)

- Where the arrow and red box is highlighted drop the path to your text file, so here go back to the first folder that contains the two folders “**Sample Tests**” and “**EncryptDecrypt\_application**”

- Select the “**Sample Tests**” and open it in another window

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXdzHodhmAuqFSROx-TuSEBmayohAjWbpm1O1dZWOH72XfnepBTvGyTYZa7UCRWBh7VAajFUc6YEiVwiTcKwsIlc5T0ag_8PUS7jnHFNKDrKf-RJFYdp4VSg7BjVDY0Vqyas4HIK70F1dE4DwRbb559KkH8e?key=KtdHvqRMgoTr1IqnIswhNw)

- Now go into the “**Test Case 1**” folder and you should see these files

\
![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXcQMQbF9m2Rw89WWTH1inrMRgp8iXz5Rg4e-5PDT6WGYMxhCbFktKpRwAixUOPvF3ztaeYSs9-27DkVfW73quq-BAJXhJUBJJrhofadx-kh0BzToJkcT_s6vgWeLocQE8oKJlx2gHoOUSQlz5gaMi6YUQdO?key=KtdHvqRMgoTr1IqnIswhNw)\
\
\
\
\
\
\


- Now you can either “drag and drop” the text file that says “textThatNeedsEncryption.txt” or you can copy its path

  - To “drag and drop” the file, you must simply drag with your cursor and drop it into the window

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXdi5DujLLkcz1_G6gn6Z28fE1qKFQjyWmkxfH0D_LTNTAzYM7wgzfcEa73xvLwoYTMvIlCDdtX9_-JO3bwi65zMV4SECb0kOK2imfBmWvw_eqcZWHcNIsRcDTUdbw52Ls8Mwh88OwvFEdck8WJuCwY4fA50?key=KtdHvqRMgoTr1IqnIswhNw)

- When dropped into the window it will look like this:

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXdjOVv3okdzDHtAIL5B3QZGs8qJ4xPcyvk_Fgm-1EO2yxO9LovSMJwOyMMbiKVIkuxAhmD00o900fIuPInyxQ1sZqqZFttLPSyNlJmBM4RrxykmNQfgnoLx1aW5RMalPXpHvM3_C2fkg8rqCM1iqC28sFzs?key=KtdHvqRMgoTr1IqnIswhNw)

- Where it is underlined, delete it. So it should look like “**C:/Users/justi/Downloads/Encryption Decryption Project App with UI/Sample Tests/Test Case 1/textThatNeedsEncryption.txt**” instead of “**file:///C:/Users/justi/Downloads/Encryption Decryption Project App with UI/Sample Tests/Test Case 1/textThatNeedsEncryption.txt**”

  - This is mainly to correct the directory to the file since the code cannot read the initial part

- **Once past this step you can move onto step 4**

- If you do decide to get the path of the file, just right click the file instead and select “**Copy as path**” or on most systems **Ctrl + Shift + C**

****![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXf42khh-o5zexkEuVihV_tDh1-B4jldw4QyhFiU2wcBOX-4J4BzEHog_R0Bcgf1KBHb7Pcr0M_s2lDPMT8h9EHiKJ6lsh8LOpzd8Y-SWpF6x7HrjGauSL4oXdqeNd9sLI5x1_IRhpwqGlvo9WS5V-mIV-c?key=KtdHvqRMgoTr1IqnIswhNw)****

- Then with that go back to the window and paste in the path with **Ctrl + V**

- **It should look like this:**

****![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXeySUjDkgLYhoXbp82OnUN_il4tS-qq1ePtEqmSmwIrXeeoGUgAsEWeC6nymBxWA8j9uUwSmQMSet2qJ9lKB7gHcjjVNFDvRGh2MTqhGk0L1RE8QPO0Wd8uEqFHB6O-johynyX4XJeRgF3Vqf3Ad4LcrdEG?key=KtdHvqRMgoTr1IqnIswhNw)****

- Now we can move onto step 4

4. ### Selecting the Block Size and Generating a Key

- For this step we can select the block size to be in “4s” so you can choose the block size to be 4, 8, 12, 16, 32, 64, or even 1024, it is up to you.

- In this example we will use 4 to start…

- Keep in mind that you must remember what block size you put, hence why there is also a file named “**Block size.txt**” for future reference in the test case folder

- Below is what it will look like when inputted

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXeS4GDSYCvzF_RzRw_hgLaO-QKME76pxH2pGTKOLYSqIWAHns9WUM4SSC2XThcymSrgyp1kfPf2oWrw4_2YmN4p8upUMr5n0uIS2rpqZT8Ol8TiTOKFkCKG8R5B7DaViAzhbuz5ZPBffzuGAEtaTCJBz8LF?key=KtdHvqRMgoTr1IqnIswhNw)

- Here we are choosing to ignore the key so that it may randomly generate any 16 character key for us, or you can click “**Generate Key**”

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXdAx1B2Ba2l3m1e2BJ6SrtSwjIDnujbvkkyUe3yoBEKICMKMsQBl4DmiG7hES_UyBJ-_fSb602kkdEHZJETa9BCQn69I-191-vrRZ46NyeBs-ZEk4sgXyZxxTUZTM80qiPHrfSq0_YykVPaa4EyKSJI_Hr2?key=KtdHvqRMgoTr1IqnIswhNw)

- Now let us move onto step 5

5. ### Selecting/Creating the Output File Path

- Here we are going to be making a output file path, so we can choose the name to be whatever we want and location, but for this specific example we are going to use the name “**encrypted**”, and choose it in the same folder as our Test Case 1

- With that in mind you can copy and paste the path from above the key and paste that into the Output path, only renaming the things before **.txt** and after “**Test Case 1/**”

1. Copy the path from the input

2. Paste the path onto the bottom “**Output File**” renaming it to your desired name, in this case “**encrypted**” because we are encrypting the file

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXeGZq-jg6tYXSpJphun6I1XJI5PC9xRLdfkoLPCfJAo5IYs_61_DhpvAe13umKGaHuqS_0iPMMOeo91le6YByoUpZzMSS5f3fNhWWwqExEnugafxGSDGBvXDxqky47k2fiDI8jnP1Yi8IAH0bma0_w-UC8C?key=KtdHvqRMgoTr1IqnIswhNw)

- Now you can select “**Encrypt**” and you now have an encrypted file with the key saved in your folder!

- There should be a pop out screen telling you that you have successfully encrypted the file, and that a key has been saved to the designated location alongside that file![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXe5FgtbVoIwR0RkcZNdPxaLw0e9xNM-uylWEAR5u0QDTAb1g3Rn_O7u0tYzj3noBZpPj8Sg4FsW8c8rn4Gsgfk0o1KLYV2f5rglvaN-eJLaPQEw32TDZz1yFU0L3RwEFQCPU_2AexWmCoWnhBk0_1gc8B5J?key=KtdHvqRMgoTr1IqnIswhNw)

\
\
\
\
\
\
\
\
\
\


- Now with our newly generated key and “**encrypted.txt**” if you open “encrypted.txt” it should showcase cipher text like this:

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXep03f3OHvmkIjkqJtBqx-2SFC0LUbBtgNlceEMx3_9qaIr7x82pC1teITSoYXHtqypzWBRwxAyi3qyNqv3IRtr34A3BVkLdoowcdiWAReI21b0hh8a9l4EYYGIxT6-ZVOg_OiedTbg4FjCYuJsVGsonMg?key=KtdHvqRMgoTr1IqnIswhNw)

- And alongside this encrypted file you also have your “**key.txt”** which if you open should showcase exactly like what you see in your window (keys may or may not be similar due to random generation):

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXcef9pbSlh5p-cZLvNjcaNsd3ulMXEF4WeWVlj-kt70HwgtJ0Lr74n5o7r60dVfPf5ouDe-dmMpztDlpI35KT6YdQC1sfudlP-s2hnL-IIhE41wzLVs3lC7eQJSzTTIjkyMOi7_5v4RbXI01EiGHTXU-d_z?key=KtdHvqRMgoTr1IqnIswhNw)


# Beginning Decryption

6. ### Reselecting the Input File

- Now in order to decrypt your encrypted file you must copy the path location to the “**encrypted.txt**”, so you can simply delete the input file and copy and paste the output file path into the input file path:

1. Delete the input file path

2. Copy the output file path

3. Paste the output file path into the input file path

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXf4mU9Tn1EWHpfMdvLN8VuW6jBA6hVgAJ2eiPyO-ybuE2IHo9y8n_abL3eKutlExljjGOICme83Qt8QWD4ZZGoNymeek8OChzUcruQ_hegVpgHw6iGRyV9sPHIice7gL5elHyqTu5GT1qXnmUJqojzWKRka?key=KtdHvqRMgoTr1IqnIswhNw)

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXdYcuXhVvnPCeAqiOvKeQp6OLOtkgU6rIZ-0as1d13l2UTm9-AJLhGYUdDiUOYOhZ0EjKry8NHUIYYvckrR9Qzo9rJtA4RNDn8TPAh6BEY6eykyjJZ4whzJq2x0xF7SZ6vLzoAIXa9eKmPH4BeqgbrnabkJ?key=KtdHvqRMgoTr1IqnIswhNw)

- Now that we have the input file path, we just need to create a new output file path

7. ###  Reselecting the Block Size and Key

- If you have accidentally generated a new key, no need to worry, just delete the key and “drag and drop” the “**key.txt**” file into the empty space that says “**Key Goes Here!**”

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXfCLcLTohd6XkEnpgCEP0oN35KZ0_lvFvhqNQTHzBRQgbtE-YUBh69VSIusK2ji5vlvKUn2SMQFf97PU623PhFob-7g2JP05ymKZy-gpaqNJHoSZYuHx3NqyhnBDIcpxrgerSnhRYnQISaw1q8KMLEiF_Nn?key=KtdHvqRMgoTr1IqnIswhNw)

- Be sure to remove the “**file:///**” in front of the directory so that it could read the “**key.txt**” file

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXc-ilo2a0npYCiC-8_KuL6_9SipAeLgxMYPcF1LyxGsgrceoz2WjboRJMWNh701DJ2TYBqTb4zxLCbPCxNPRKTXtJtu0khJlffSigxntE6NRbgid4WkE-t9nZdMR0d-xAGVNLiOF42hMdcvG-pAeDhaZY-D?key=KtdHvqRMgoTr1IqnIswhNw)

- If you have kept the block size on a separate piece of paper you can always refer back to it and rewrite it as needed if you also accidentally close out of the application. Of course you can always brute force if you must, if you do end up losing the block size (remember multiples of 4).

- Otherwise we are ready to move onto step 8.

8. ### Creating a new Output File Path

- Now that we have come this far, we can repeat the same process we had when selecting a new output path. This time the key will not go with you, as you will only get the message that was originally encrypted.

- So, in this case we are going to leave the location as is for simplicity, but we are going to change just the name from “**encrypted.txt**” to “**decrypted.txt**” so it will look like this:

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXefZOTHoMvNM-2KaZWKOnd2dMTmfy96sIsucZOz7ffRCGHPM-82MO4Kn-OvApmCmNsrtSVWLK_sEaUAEhziWTOxNhAtWh3A-QYFJN8MzH4w8sxiM7eJtKT7L8vY7A-1qDAoRZlKETAkPHypO9Z5lJmj_W0n?key=KtdHvqRMgoTr1IqnIswhNw)

- Now simply press “**Decrypt**” and you have successfully decrypted your message!

- It will have a popout screen with “Success” and the actual information text stating “File has decrypted successfully!”, you may select **OK**  to close the window out.

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXe18AA-aPCCe72jW70ndV1XNOqSYkneEUNokHUtKvFAHD0JFC5AMRk9zA7HgBp22S44VFn6R0-EYeTsnIQ4dN5aTNv3Z9HSm4NsD_WNFjiwS7V2jtqIJWITVsyN4IiFIjxcNNf69K25z6knFH8zxFtGocw7?key=KtdHvqRMgoTr1IqnIswhNw)

- Now if you go back to your “**Test Case 1**” folder you will see the “**decrypted.txt**” and now be able to open it and see that it showcases the original message that needed to be encrypted!

- Have fun experimenting with the encryption!

Some Things to Note

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

If you read this far down I hope this project satisfies if at all possible anything… Took me a long time to create and was probably the most i’ve learned 


<!--EndFragment-->
