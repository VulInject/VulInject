struct route_flags * add_route_flags(struct route_flags **rf_head, const flag_t flags, const flag_t mask)
{
struct route_flags *shm_rf;
struct route_flags *prev_rf, *tmp_rf;
prev_rf = tmp_rf = NULL;

if (rf_head) {

for (tmp_rf=*rf_head; tmp_rf!=NULL; tmp_rf=tmp_rf->next) {
if ((tmp_rf->flags == flags) && (tmp_rf->mask == mask)) return tmp_rf;
}


for (tmp_rf=*rf_head; tmp_rf!=NULL; tmp_rf=tmp_rf->next) {
if (tmp_rf->mask < mask) break;
prev_rf=tmp_rf;
}
}

if ((shm_rf = shm_malloc(sizeof(struct route_flags))) == NULL) {
SHM_MEM_ERROR;
return NULL;
}
memset(shm_rf, 0, sizeof(struct route_flags));

shm_rf->flags=flags;
shm_rf->mask=mask;
shm_rf->next=tmp_rf;

if (prev_rf) {
prev_rf->next = shm_rf;
}
else {
if (rf_head) *rf_head=shm_rf;
}

return shm_rf;
}