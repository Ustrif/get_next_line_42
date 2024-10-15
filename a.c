#include <stdio.h>
#include <unistd.h>
#include "get_next_line.h"

int main() {
	int fd = open("rx.txt", 'r');
	if (fd == -1) {
		perror("Dosya açılamadı");
		return 1;
	}

	char buffer[BUFFER_SIZE];
	ssize_t bytesRead = read(fd, buffer, sizeof(buffer) - 1);

	if (bytesRead == -1) {
		perror("Okuma hatası");
		close(fd);
		return 1;
	}

	buffer[bytesRead] = '\0'; // Sonuna null karakter ekle
	printf("Okunan veri: %s.", buffer);

	close(fd);
	return 0;
}
