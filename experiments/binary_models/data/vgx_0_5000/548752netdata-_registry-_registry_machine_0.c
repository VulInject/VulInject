REGISTRY_MACHINE *registry_machine_allocate(const char *machine_guid, time_t when) {
debug(D_REGISTRY, "Registry: registry_machine_allocate('%s'): creating new machine, sizeof(MACHINE)=%zu", machine_guid, sizeof(REGISTRY_MACHINE));

REGISTRY_MACHINE *m = mallocz(sizeof(REGISTRY_MACHINE));

strncpyz(m->guid, machine_guid, GUID_LEN);

debug(D_REGISTRY, "Registry: registry_machine_allocate('%s'): creating dictionary of urls", machine_guid);
m->machine_urls = dictionary_create(REGISTRY_DICTIONARY_OPTIONS);

m->first_t = m->last_t = (uint32_t)when;
m->usages = 0;

registry.machines_memory += sizeof(REGISTRY_MACHINE);
registry.machines_count++;

registry.machines_urls_memory -= dictionary_stats_for_registry(m->machine_urls);
dictionary_set(registry.machines, m->guid, m, sizeof(REGISTRY_MACHINE));
registry.machines_urls_memory += dictionary_stats_for_registry(m->machine_urls);

return m;
}