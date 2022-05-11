# 42cursus - minitalk

![](https://github.com/hanshazairi/42-minitalk/workflows/norminette/badge.svg)
![](https://github.com/hanshazairi/42-minitalk/workflows/build/badge.svg)

## Project Information - Proje Hakkında

Bir terminalden başka bir terminale sinyal ile mesaj gönderimi yapar.

### Additional Note - Ek Not
[EN] : If you want it to send the other message on the bottom line after sending the first message, add this code in client.c main : 
[TR] : Eğer bir mesaj yazdıktan sonra diğer mesajınızın karşı terminalde bir alt satıra geçerek yazdırmasını istiyorsanız şu kod satırını `client.c'de` main kısmındaki
50. kod satırının altına ekleyin:

	while (av[2][i] == '\0')
	{
		convert_char('\n', pid);
		break ;
	}
