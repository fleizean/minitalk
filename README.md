# 42cursus - minitalk

![](https://github.com/hanshazairi/42-minitalk/workflows/norminette/badge.svg)
![](https://github.com/hanshazairi/42-minitalk/workflows/build/badge.svg)

## Project Information - Proje Hakkında
[EN] : The purpose of this project is to code a small data exchange program using UNIX signals.
[TR] : Bu projenin amacı, UNIX sinyallerini kullanarak küçük bir veri değişim programını kodlamaktır.

## Mandatory Part - Zorunlu Bölüm

[EN] : You must create a communication program in the form of a client and a server.
• The server must be started first. After its launch, it has to print its PID.
• The client takes two parameters:
◦ The server PID.
◦ The string to send.
• The client must send the string passed as a parameter to the server.
Once the string has been received, the server must print it.
• The server has to display the string pretty quickly. Quickly means that if you think
it takes too long, then it is probably too long.
• Your server should be able to receive strings from several clients in a row without
needing to restart.
• The communication between your client and your server has to be done only using
UNIX signals.
• You can only use these two signals: SIGUSR1 and SIGUSR2.

[-------------------------------------------------------------------------------------------------------------------------------------------------------------]

[TR] Client ve server şeklinde bir iletişim program oluşturmalısınız.
• İlk olarak server başlatılmalıdır. Başlatıldıktan sonra PID’sini. yazdırması gerekir.
• The client takes two parameters:
◦ Server PID.
◦ Gönderilecek string.
• Client, parametre olarak iletilen String’i server’a göndermelidir.
String alındıktan sonra server’in onu yazdırması gerekir.
• Server’in string’i oldukça hızlı bir şekilde görüntülemesi gerekir. Çok uzun sürdüğünü
düşünüyorsanız muhtemelen çok uzundur.
• Server, yeniden başlatmaya gerek kalmadan arka arkaya birkaç client’dan dizeler
alabilmelidir.
• Client ve server arasındaki iletişim yalnızca UNIX sinyalleri kullanılarak yapılmalıdır.
• Yalnızca bu iki sinyali kullanabilirsin: SIGUSR1 ve SIGUSR2.


### Additional Note - Ek Not
[EN] : If you want it to send the other message on the bottom line after sending the first message, add this code in client.c main : 
[TR] : Eğer bir mesaj yazdıktan sonra diğer mesajınızın karşı terminalde bir alt satıra geçerek yazdırmasını istiyorsanız şu kod satırını `client.c'de` main kısmındaki
50. kod satırının altına ekleyin:

	while (av[2][i] == '\0')
	{
		convert_char('\n', pid);
		break ;
	}
