int release_spi(
uint32_t spi_cid, uint32_t spi_sid, uint16_t cport, uint16_t sport)
{
LM_DBG("releasing spi spi_data:%p spi_cid:%u spi_sid:%u cport:%u "
"sport:%u\n",
spi_data, spi_cid, spi_sid, cport, sport);
if(!spi_data) {
return 1;
}

if(pthread_mutex_lock(&spi_data->spis_mut) != 0) {
return 1;
}


if(spi_remove(&spi_data->used_spis[spi_cid % MAX_HASH_SPI], spi_cid,
spi_sid)) {
spi_add(&spi_data->free_spi, spi_cid, spi_sid, cport, sport);
}

pthread_mutex_unlock(&spi_data->spis_mut);

return 0;
}