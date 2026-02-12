static int pm_set_resources_v9(struct packet_manager *pm, uint32_t *buffer,
struct scheduling_resources *res)
{
struct pm4_mes_set_resources *packet;

packet = (struct pm4_mes_set_resources *)buffer;
memset(buffer, 0, sizeof(struct pm4_mes_set_resources));

packet->header.u32All = pm_build_pm4_header(IT_SET_RESOURCES,
sizeof(struct pm4_mes_set_resources));

packet->bitfields2.queue_type =
queue_type__mes_set_resources__hsa_interface_queue_hiq;
packet->bitfields2.vmid_mask = res->vmid_mask;
packet->bitfields2.unmap_latency = KFD_UNMAP_LATENCY_MS / 100;
packet->bitfields7.oac_mask = res->oac_mask;
packet->bitfields8.gds_heap_base = res->gds_heap_base;
packet->bitfields8.gds_heap_size = res->gds_heap_size;

packet->gws_mask_lo = lower_32_bits(res->gws_mask);
packet->gws_mask_hi = upper_32_bits(res->gws_mask);

packet->queue_mask_lo = lower_32_bits(res->queue_mask);
packet->queue_mask_hi = upper_32_bits(res->queue_mask);

return 0;
}