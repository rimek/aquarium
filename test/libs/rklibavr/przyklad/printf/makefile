# Nazwa pliku z funkcj� main() - BEZ ROZSZERZENIA!
TARGET = main

# Lista plik�w zawieraj�cych konfiguracj� programu i sprz�tu
# ich zmiana powoduje przebudowanie ca�ego projektu
CONFIG = 

# Lista plik�w �r�d�owych w j�zyku C
SRC = $(TARGET).c

# Lista plik�w �r�d�owych w asemblerze (rozszerzenie S - DU�E S !)
ASRC =

# typ mikrokontrolera
#MCU = at90s2313
MCU = at90s8515
#MCU = at90s8535
#MCU = atmega161
#MCU = atmega163
#MCU = atmega16
#MCU = atmega32
#MCU = atmega128

# Poziom optymalizacji (0, 1, 2, 3, s)
OPT = s

# �cie�ka do katalogu z bibliotekami u�ytkownika
USRLIB	= ../../lib

# Lista plik�w �r�d�owych bibliotek w j�zyku C
# (niepotrzebne mo�na "zakomentowa�" znakiem # (hash) na pocz�tku linii)
SRCLIB =

# Dodatkowe biblioteki
#
# Minimalna wersja printf
LDFLAGS += -Wl,-u,vfprintf -lprintf_min
#
# Zmiennoprzecinkowa wersja printf (wymaga biblioteki matematycznej)
#LDFLAGS += -Wl,-u,vfprintf -lprintf_flt
#
# Biblioteka matematyczna
#LDFLAGS += -lm

# Tu w��czamy w�a�ciwy plik, w kt�rym s� zapisane komendy
include $(USRLIB)/avr_make

