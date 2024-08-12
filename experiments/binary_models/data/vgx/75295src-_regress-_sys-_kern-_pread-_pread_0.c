int
main(int argc, char *argv[])
{	
char VAR1[] = "";
const char VAR2[10] = "";
char VAR3;
int VAR4, VAR5;

if ((VAR4 = mkstemp(VAR1)) < 0)
FUN1(1, "");
remove(VAR1);

if (write(VAR4, VAR2, sizeof(VAR2)) != sizeof(VAR2))
FUN1(1, "");

if (FUN2(VAR4, 0, VAR6) != 0)
FUN1(1, "");

if (read(VAR4, &VAR3, 1) != 1)
FUN1(1, "");

if (VAR3 != VAR2[0])
FUN3(1, "", VAR3, VAR2[0]);

if (pread(VAR4, &VAR3, 1, 7) != 1)
FUN1(1, "");

if (VAR3 != VAR2[7])
FUN3(1, "", VAR3, VAR2[7]);

if (read(VAR4, &VAR3, 1) != 1)
FUN1(1, "");

if (VAR3 != VAR2[1])
FUN3(1, "", VAR3, VAR2[1]);

if ((VAR5 = pread(VAR4, &VAR3, 1, -1)) != -1)
FUN3(1, "pread with negative offset VAR7,\
VAR8 %VAR9", VAR5);
if (VAR10 != VAR11)
FUN1(1, "");

if ((VAR5 = pread(VAR4, &VAR3, 3, VAR12)) != -1)
FUN3(1, "pread with wrapping offset VAR7,\
VAR8 %VAR9", VAR5);
if (VAR10 != VAR11)
FUN1(1, "");

if (read(VAR4, &VAR3, 1) != 1)
FUN1(1, "");

if (VAR3 != VAR2[2])
FUN3(1, "", VAR3, VAR2[2]);

close(VAR4);


VAR4 = open("", VAR13);
if (VAR4 < 0)
FUN4("");
else if ((VAR5 = pread(VAR4, &VAR3, 1, 7)) != -1)
FUN3(1, "", VAR5);
else if (VAR10 != VAR14)
FUN1(1, "");

return 0;
}