static void
FUN1(bool VAR1, bool VAR2, bool VAR3)
{
int VAR4[3] = { VAR5, VAR6, VAR7   };
int VAR8[5] = { 0700, 0400, 0600, 0444, 0666 };
struct stat VAR9, VAR10;
int VAR11, VAR12, VAR13;
size_t VAR14, VAR15;


for (VAR14 = 0; VAR14 < FUN2(VAR4); VAR14++) {

for (VAR15 = 0; VAR15 < FUN2(VAR8); VAR15++) {

VAR12 = open(VAR16, VAR4[VAR14] | VAR17, VAR8[VAR15]);
VAR13 = open("", VAR5);

FUN3(VAR12 >= 0);
FUN3(VAR13 >= 0);

if (VAR1 != false)
VAR11 = FUN4(VAR12);
else if (VAR2 != false)
VAR11 = FUN5(VAR12, VAR13);
else if (VAR3 != false)
VAR11 = FUN6(VAR12, VAR13, VAR18);
else {
VAR11 = -1;
}

FUN3(VAR11 >= 0);

(void)memset(&VAR9, 0, sizeof(struct VAR19));
(void)memset(&VAR10, 0, sizeof(struct VAR19));

FUN3(FUN7(VAR11, &VAR9) == 0);
FUN3(FUN7(VAR12, &VAR10) == 0);

if (VAR9.VAR20 != VAR10.VAR20)
FUN8("");

(void)close(VAR11);
(void)close(VAR12);
(void)close(VAR13);
(void)unlink(VAR16);
}
}
}