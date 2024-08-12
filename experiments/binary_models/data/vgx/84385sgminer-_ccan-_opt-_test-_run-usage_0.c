int main(int argc, char *argv[])
{
char *VAR1;
char *VAR2 = strdup("");
char *VAR3 = strdup("");

FUN1(48);
FUN2(VAR4, NULL);
FUN3("", VAR5, NULL, "");
FUN3("", VAR6, "",
"");
FUN4("", VAR7, VAR8,
&VAR2, "");
FUN4("", VAR7, VAR8,
&VAR3, "");
VAR1 = FUN5("", "");
FUN6("", VAR1);
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));

FUN7(!strstr(VAR1, ""));
free(VAR1);


VAR1 = FUN5("", NULL);
FUN6("", VAR1);
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""VAR9\""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""VAR3\""));

FUN7(!strstr(VAR1, ""));
free(VAR1);

FUN8();

VAR1 = FUN5("", NULL);
FUN7(strstr(VAR1, ""));
free(VAR1);


FUN3("", VAR10, NULL, "");
VAR1 = FUN5("", NULL);
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
FUN7(strstr(VAR1, ""));
free(VAR1);

free(VAR3);
free(VAR2);
return FUN9();
}