static void FUN1(void **VAR1) {
(void)VAR1;

const uint8_t VAR2[8] = {0x04, 0x01, 0x00, 0x7b, 0x01, 0x01, 0x01, 0x01};
const sockaddr_t VAR3 = FUN2("", "");

uint8_t VAR4[512];
FUN3(sizeof(VAR2), FUN4(VAR5, VAR4, &VAR3));
FUN5(VAR2, VAR4, sizeof(VAR2));
}