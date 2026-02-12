static void *postcalc_hash(void *userdata)
{
struct pc_data *pcd = (struct pc_data *)userdata;
struct thr_info *thr = pcd->thr;
unsigned int entry = 0;
int found = FOUND;
if (pcd->kinterface == KL_SCRYPT)
found = SCRYPT_FOUND;

pthread_detach(pthread_self());
RenameThread("postcalchsh");


if (unlikely(pcd->res[found] & ~found)) {
applog(LOG_WARNING, "%"PRIpreprv": invalid nonce count - HW error",
thr->cgpu->proc_repr);
inc_hw_errors_only(thr);
pcd->res[found] &= found;
}

for (entry = 0; entry < pcd->res[found]; entry++) {
uint32_t nonce = pcd->res[entry];
if (pcd->kinterface == KL_FULLHEADER)
nonce = swab32(nonce);

applog(LOG_DEBUG, "OCL NONCE %u found in slot %d", nonce, entry);
submit_nonce(thr, &pcd->work, nonce);
}

clean_work(&pcd->work);
free(pcd);

return NULL;
}