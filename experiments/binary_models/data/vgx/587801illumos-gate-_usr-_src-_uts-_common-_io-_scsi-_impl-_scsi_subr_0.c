char *
FUN1(uchar_t VAR1)
{
static char *VAR2[23] = {
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
"",
""
};
static char *VAR3[6] = {
"",
"",
"",
"",
"",
""
};

if (VAR1 < 23) {
return (VAR2[VAR1]);
} else if (FUN2(VAR1)) {
return ("");
} else if (FUN3(VAR1) &&
(int)((VAR1) & 0xF) < (sizeof (VAR3) / sizeof (char *))) {
return (VAR3[VAR1 & 0xF]);
} else {
return ("");
}

}