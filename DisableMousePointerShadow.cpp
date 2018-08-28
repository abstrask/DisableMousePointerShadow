#include <Windows.h>

int main() {
	BOOL didSucceed = SystemParametersInfo(
		SPI_SETCURSORSHADOW,
		0,
		(PVOID) FALSE,
		SPIF_UPDATEINIFILE + SPIF_SENDCHANGE);

	return didSucceed ? EXIT_SUCCESS : EXIT_FAILURE;
}