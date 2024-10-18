# نام آزمایش :
دستور begin


## هدف :
ارسال یک پیام از طریق ارتباط سریال

 
  ## کد آزمایش :

void setup() 

{

serial.begin(9600);

}

void loop() 

{
 
serial.print("hello raheleh!")

delay(1000);

}


  ## توضیحات کد  :
  serial.begin(9600) : سرعت ارتباط سریال ۹۶۰۰ است.

  serial.print("hello raheleh!"): ارسال پیام از طریق ارتباط سریال .

  delay(1000): وقفه ۱ ثانیه ای


## نتیجه گیری:

این برنامه هر ۱ ثانیه دستور hello raheleh را چاپ میکند

نکته: اگر حرف ln را بعد از کلمه print  بنویسیم ، هرکدام از این دستورات در خط های پشت سر هم چاپ میشوند
درغیر این صورت همه پشت سر هم چاپ میشود

## شکل مدار
![توضیح تصویر](https://github.com/Rahel12384/microprocessor-2/blob/main/Micro2/IMG_20241014_005341_980.jpg)

![توضیح تصویر](https://github.com/Rahel12384/microprocessor-2/blob/main/Micro2/IMG_20241014_005342_185.jpg)
 
  
