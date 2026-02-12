static int caamTRNG(unsigned char *out, int outSz)
{
int sz = 0;

CAAM_ADDRESS  reg; 
unsigned char* local;
int ofst = sizeof(unsigned int);


if ((CAAM_READ(caam.baseAddr + CAAM_RTMCTL) & CAAM_ENTVAL) != CAAM_ENTVAL) {
return CAAM_WAITING;
}


if ((CAAM_READ(caam.baseAddr + CAAM_RTSTATUS) & 0x0000FFFF) > 0) {
WOLFSSL_MSG("RNG in a bad state");
return Failure;
}


reg   = caam.baseAddr + CAAM_RTENT0;
sz    = outSz;
local = out;

while (sz > 3 && reg <= caam.baseAddr + CAAM_RTENT_MAX) {
unsigned int data = CAAM_READ(reg);
*((unsigned int*)local) = data;
reg    += ofst;
local  += ofst;
sz     -= ofst;
}

if (reg > CAAM_RTENT_MAX && sz > 0) {
return -1;
}


if (sz > 0) {
unsigned int tmp = CAAM_READ(reg);
memcpy(local, (unsigned char*)&tmp, sz);
}


if (reg != CAAM_RTENT_MAX) {
CAAM_READ(caam.baseAddr + CAAM_RTENT_MAX);
}

return Success;
}