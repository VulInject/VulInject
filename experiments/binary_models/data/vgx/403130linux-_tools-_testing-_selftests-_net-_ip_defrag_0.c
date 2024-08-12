const struct in_addr VAR1 = { .VAR2 = FUN1(VAR3 + 2) };
const struct in6_addr VAR4 = VAR5;




static int VAR6;
static int VAR7;




static uint8_t VAR8[VAR9];
static uint8_t VAR10[VAR11];
static uint32_t VAR12 = 0xabcd;
static int VAR13;
static int VAR14;
static unsigned int VAR15;


static void FUN2(int VAR16)
{
ssize_t VAR17;
static uint8_t VAR18[VAR9];

VAR17 = recv(VAR16, VAR18, VAR6, 0);
VAR13++;

if (VAR19) {
if (VAR17 == -1 && (VAR20 == VAR21 || VAR20 == VAR22))
return;  
if (!VAR23) {
if (VAR17 != -1)
FUN3(1, 0, "",
(int)VAR17);
FUN3(1, VAR20, "", VAR20);
}
}

if (VAR17 == -1)
FUN3(1, VAR20, "",
VAR6, VAR7);
if (VAR17 != VAR6)
FUN3(1, 0, "", (int)VAR17, VAR6);
if (memcmp(VAR8, VAR18, VAR6))
FUN3(1, 0, "");
}