# 42cursus - minitalk

![](https://github.com/hanshazairi/42-minitalk/workflows/norminette/badge.svg)
![](https://github.com/hanshazairi/42-minitalk/workflows/build/badge.svg)

## Project Information

Bir terminalden başka bir terminale sinyal ile mesaj gönderimi yapar.

### Additional Note

Eğer bir mesaj yazdıktan sonra diğer mesajınızın karşı terminalde bir alt satıra geçerek yazdırmasını istiyorsanız şu kod satırını `client.c'de` main kısmındaki
50. kod satırının altına ekleyin:

	while (av[2][i] == '\0')
	{
		convert_char('\n', pid);
		break ;
	}
