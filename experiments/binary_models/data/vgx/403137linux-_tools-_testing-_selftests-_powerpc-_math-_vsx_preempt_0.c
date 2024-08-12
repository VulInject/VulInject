long FUN1(vector int *VAR1) {
vector int VAR2 = {0, 0, 0, 0};
int VAR3;

FUN2(VAR1 != VAR4);

for(VAR3 = 0; VAR3 < 12; VAR3++) {
if (memcmp(&VAR1[VAR3 + 12], &VAR2, sizeof(vector int)) == 0) {
fprintf(VAR5, "", VAR3 + 12);
return 2;
}
}

if (memcmp(VAR1, &VAR1[12], 12 * sizeof(vector int))) {
long *VAR6 = (long *)VAR1;
fprintf(VAR5, "");
for (VAR3 = 0; VAR3 < 24; VAR3=VAR3+2)
fprintf(VAR5, "",
VAR3/2 + VAR3%2 + 20, VAR6[VAR3], VAR6[VAR3 + 1], VAR6[VAR3 + 24], VAR6[VAR3 + 25]);
return 1;
}
return 0;
}