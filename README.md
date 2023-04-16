# 42cursus - minitalk

<p align="center">
    <img src="https://img.shields.io/github/languages/count/fleizean/minitalk?style=for-the-badge"/>
    <img src="https://img.shields.io/github/last-commit/fleizean/minitalk?style=for-the-badge"/>
    <img src="https://img.shields.io/github/forks/fleizean/minitalk?style=for-the-badge"/>
    <img src="https://img.shields.io/github/followers/fleizean?style=for-the-badge"/>
    <img src="https://img.shields.io/github/watchers/fleizean/minitalk?style=for-the-badge"/>
</p>

## Project Information
The purpose of this project is to code a small data exchange program using UNIX signals.

## Mandatory Part

You must create a communication program in the form of a client and a server.
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



### Additional Note
If you want it to send the other message on the bottom line after sending the first message, add this code in client.c main : 

	while (av[2][i] == '\0')
	{
		convert_char('\n', pid);
		break ;
	}
