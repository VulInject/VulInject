int virtio_load ( VirtIODevice * vdev , QEMUFile * f , int version_id ) { int i , ret ; int32_t config_len ; uint32_t num ; uint32_t features ; BusState * qbus = qdev_get_parent_bus ( DEVICE ( vdev ) ) ; VirtioBusClass * k = VIRTIO_BUS_GET_CLASS ( qbus ) ; VirtioDeviceClass * vdc = VIRTIO_DEVICE_GET_CLASS ( vdev ) ; if ( k -> load_config ) { ret = k -> load_config ( qbus -> parent , f ) ; if ( ret ) { return ret ; } } qemu_get_8s ( f , & vdev -> status ) ; qemu_get_8s ( f , & vdev -> isr ) ; qemu_get_be16s ( f , & vdev -> queue_sel ) ; if ( vdev -> queue_sel >= VIRTIO_QUEUE_MAX ) { return - 1 ; } qemu_get_be32s ( f , & features ) ; vdev -> guest_features = features ; config_len = qemu_get_be32 ( f ) ; qemu_get_buffer ( f , vdev -> config , MIN ( config_len , vdev -> config_len ) ) ; while ( config_len > vdev -> config_len ) { qemu_get_byte ( f ) ; config_len -- ; } num = qemu_get_be32 ( f ) ; if ( num > VIRTIO_QUEUE_MAX ) { error_report ( "Invalid number of virtqueues: 0x%x" , num ) ; return - 1 ; } for ( i = 0 ; i < num ; i ++ ) { vdev -> vq [ i ] . vring . num = qemu_get_be32 ( f ) ; if ( k -> has_variable_vring_alignment ) { vdev -> vq [ i ] . vring . align = qemu_get_be32 ( f ) ; } vdev -> vq [ i ] . vring . desc = qemu_get_be64 ( f ) ; qemu_get_be16s ( f , & vdev -> vq [ i ] . last_avail_idx ) ; vdev -> vq [ i ] . signalled_used_valid = false ; vdev -> vq [ i ] . notification = true ; if ( ! vdev -> vq [ i ] . vring . desc && vdev -> vq [ i ] . last_avail_idx ) { error_report ( "VQ %d address 0x0 " "inconsistent with Host index 0x%x" , i , vdev -> vq [ i ] . last_avail_idx ) ; return - 1 ; } if ( k -> load_queue ) { ret = k -> load_queue ( qbus -> parent , i , f ) ; if ( ret ) { return ret ; } } } virtio_notify_vector ( vdev , VIRTIO_NO_VECTOR ) ; if ( vdc -> load != NULL ) { ret = vdc -> load ( vdev , f , version_id ) ; if ( ret ) { return ret ; } } if ( vdc -> vmsd ) { ret = vmstate_load_state ( f , vdc -> vmsd , vdev , version_id ) ; if ( ret ) { return ret ; } } ret = vmstate_load_state ( f , & vmstate_virtio , vdev , 1 ) ; if ( ret ) { return ret ; } if ( vdev -> device_endian == VIRTIO_DEVICE_ENDIAN_UNKNOWN ) { vdev -> device_endian = virtio_default_endian ( ) ; } if ( virtio_64bit_features_needed ( vdev ) ) { uint64_t features64 = vdev -> guest_features ; if ( virtio_set_features_nocheck ( vdev , features64 ) < 0 ) { error_report ( "Features 0x%" PRIx64 " unsupported. " "Allowed features: 0x%" PRIx64 , features64 , vdev -> host_features ) ; return - 1 ; } } else { if ( virtio_set_features_nocheck ( vdev , features ) < 0 ) { error_report ( "Features 0x%x unsupported. " "Allowed features: 0x%" PRIx64 , features , vdev -> host_features ) ; return - 1 ; } } if ( ! virtio_device_started ( vdev , vdev -> status ) && ! virtio_vdev_has_feature ( vdev , VIRTIO_F_VERSION_1 ) ) { vdev -> start_on_kick = true ; } RCU_READ_LOCK_GUARD ( ) ; for ( i = 0 ; i < num ; i ++ ) { if ( vdev -> vq [ i ] . vring . desc ) { uint16_t nheads ; if ( virtio_vdev_has_feature ( vdev , VIRTIO_F_VERSION_1 ) ) { virtio_init_region_cache ( vdev , i ) ; } else { virtio_queue_update_rings ( vdev , i ) ; } if ( virtio_vdev_has_feature ( vdev , VIRTIO_F_RING_PACKED ) ) { vdev -> vq [ i ] . shadow_avail_idx = vdev -> vq [ i ] . last_avail_idx ; vdev -> vq [ i ] . shadow_avail_wrap_counter = vdev -> vq [ i ] . last_avail_wrap_counter ; continue ; } nheads = vring_avail_idx ( & vdev -> vq [ i ] ) - vdev -> vq [ i ] . last_avail_idx ; if ( nheads > vdev -> vq [ i ] . vring . num ) { virtio_error ( vdev , "VQ %d size 0x%x Guest index 0x%x " "inconsistent with Host index 0x%x: delta 0x%x" , i , vdev -> vq [ i ] . vring . num , vring_avail_idx ( & vdev -> vq [ i ] ) , vdev -> vq [ i ] . last_avail_idx , nheads ) ; vdev -> vq [ i ] . used_idx = 0 ; vdev -> vq [ i ] . shadow_avail_idx = 0 ; vdev -> vq [ i ] . inuse = 0 ; continue ; } vdev -> vq [ i ] . used_idx = vring_used_idx ( & vdev -> vq [ i ] ) ; vdev -> vq [ i ] . shadow_avail_idx = vring_avail_idx ( & vdev -> vq [ i ] ) ; vdev -> vq [ i ] . inuse = ( uint16_t ) ( vdev -> vq [ i ] . last_avail_idx - vdev -> vq [ i ] . used_idx ) ; if ( vdev -> vq [ i ] . inuse > vdev -> vq [ i ] . vring . num ) { error_report ( "VQ %d size 0x%x<last_avail_idx 0x%x - " "used_idx 0x%x" , i , vdev -> vq [ i ] . vring . num , vdev -> vq [ i ] . last_avail_idx , vdev -> vq [ i ] . used_idx ) ; return - 1 ; } } } if ( vdc -> post_load ) { ret = vdc -> post_load ( vdev ) ; if ( ret ) { return ret ; } } return 0 ; } 