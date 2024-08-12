void
FUN1(const VAR1 *VAR2, const VAR3 *VAR4)
{
int VAR5;

(void) FUN2("");

(void) FUN2(""
""
"");
(void) FUN2(""
""
"");

(void) FUN2("",
"",
"", "", "", "",
"", "", "", "");

(void) FUN2("",
"",
"", "", "", "",
"", "", "", "");

for (VAR5 = 0; VAR5 < 64; VAR5++)
FUN3(&VAR4->VAR6[VAR5], VAR5);

FUN3(VAR2, -1);

(void) FUN2("");
}