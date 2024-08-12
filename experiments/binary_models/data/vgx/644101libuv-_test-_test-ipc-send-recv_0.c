static int FUN1(int VAR1) {
struct sockaddr_in VAR2;
int VAR3;

FUN2(0 == FUN3("", VAR4, &VAR2));

VAR5.VAR6 = VAR7;

VAR3 = FUN4(FUN5(), &VAR5.send.VAR8);
FUN2(VAR3 == 0);

VAR3 = FUN4(FUN5(), &VAR5.VAR9.VAR8);
FUN2(VAR3 == 0);

VAR3 = FUN6(&VAR5.send.VAR8, (const struct VAR10*) &VAR2, 0);
FUN2(VAR3 == 0);

VAR3 = FUN6(&VAR5.VAR9.VAR8, (const struct VAR10*) &VAR2, 0);
FUN2(VAR3 == 0);

VAR3 = FUN7(VAR1);
FUN2(VAR3 == 0);

FUN8();
return 0;
}