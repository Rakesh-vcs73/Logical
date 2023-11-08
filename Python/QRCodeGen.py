import qrcode
 
url = "https://www.linkedin.com/in/rakesh-vcs73/"
 
img = qrcode.make(url)
 
# Saving as an image file
img.save('LinkedInQRCode.png')