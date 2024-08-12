int main(int argc, char **argv) {
char VAR1[10];
char VAR2[8] = "";
memcpy(VAR1, VAR2, sizeof VAR1);
return 1;
}