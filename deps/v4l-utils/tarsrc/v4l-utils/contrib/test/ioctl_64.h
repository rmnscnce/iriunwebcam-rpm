/* This file is auto-generated by make sync-with-kernel */

#define CMD64_DMX_ADD_PID 0x40026f33
#define CMD64_DMX_DQBUF 0xc0186f40
#define CMD64_DMX_EXPBUF 0xc00c6f3e
#define CMD64_DMX_GET_PES_PIDS 0x800a6f2f
#define CMD64_DMX_GET_STC 0xc0106f32
#define CMD64_DMX_QBUF 0xc0186f3f
#define CMD64_DMX_QUERYBUF 0xc0186f3d
#define CMD64_DMX_REMOVE_PID 0x40026f34
#define CMD64_DMX_REQBUFS 0xc0086f3c
#define CMD64_DMX_SET_BUFFER_SIZE 0x6f2d
#define CMD64_DMX_SET_FILTER 0x403c6f2b
#define CMD64_DMX_SET_PES_FILTER 0x40146f2c
#define CMD64_DMX_START 0x6f29
#define CMD64_DMX_STOP 0x6f2a
#define CMD64_FE_DISEQC_RECV_SLAVE_REPLY 0x800c6f40
#define CMD64_FE_DISEQC_RESET_OVERLOAD 0x6f3e
#define CMD64_FE_DISEQC_SEND_BURST 0x6f41
#define CMD64_FE_DISEQC_SEND_MASTER_CMD 0x40076f3f
#define CMD64_FE_DISHNETWORK_SEND_LEGACY_CMD 0x6f50
#define CMD64_FE_ENABLE_HIGH_LNB_VOLTAGE 0x6f44
#define CMD64_FE_GET_EVENT 0x80286f4e
#define CMD64_FE_GET_FRONTEND 0x80246f4d
#define CMD64_FE_GET_INFO 0x80a86f3d
#define CMD64_FE_GET_PROPERTY 0x80106f53
#define CMD64_FE_READ_BER 0x80046f46
#define CMD64_FE_READ_SIGNAL_STRENGTH 0x80026f47
#define CMD64_FE_READ_SNR 0x80026f48
#define CMD64_FE_READ_STATUS 0x80046f45
#define CMD64_FE_READ_UNCORRECTED_BLOCKS 0x80046f49
#define CMD64_FE_SET_FRONTEND 0x40246f4c
#define CMD64_FE_SET_FRONTEND_TUNE_MODE 0x6f51
#define CMD64_FE_SET_PROPERTY 0x40106f52
#define CMD64_FE_SET_TONE 0x6f42
#define CMD64_FE_SET_VOLTAGE 0x6f43
#define CMD64_VIDIOC_CREATE_BUFS 0xc100565c
#define CMD64_VIDIOC_CROPCAP 0xc02c563a
#define CMD64_VIDIOC_DBG_G_CHIP_INFO 0xc0c85666
#define CMD64_VIDIOC_DBG_G_REGISTER 0xc0385650
#define CMD64_VIDIOC_DBG_S_REGISTER 0x4038564f
#define CMD64_VIDIOC_DECODER_CMD 0xc0485660
#define CMD64_VIDIOC_DQBUF 0xc0585611
#define CMD64_VIDIOC_DQEVENT 0x80885659
#define CMD64_VIDIOC_DV_TIMINGS_CAP 0xc0905664
#define CMD64_VIDIOC_ENCODER_CMD 0xc028564d
#define CMD64_VIDIOC_ENUMAUDIO 0xc0345641
#define CMD64_VIDIOC_ENUMAUDOUT 0xc0345642
#define CMD64_VIDIOC_ENUMINPUT 0xc050561a
#define CMD64_VIDIOC_ENUMOUTPUT 0xc0485630
#define CMD64_VIDIOC_ENUMSTD 0xc0485619
#define CMD64_VIDIOC_ENUM_DV_TIMINGS 0xc0945662
#define CMD64_VIDIOC_ENUM_FMT 0xc0405602
#define CMD64_VIDIOC_ENUM_FRAMEINTERVALS 0xc034564b
#define CMD64_VIDIOC_ENUM_FRAMESIZES 0xc02c564a
#define CMD64_VIDIOC_ENUM_FREQ_BANDS 0xc0405665
#define CMD64_VIDIOC_EXPBUF 0xc0405610
#define CMD64_VIDIOC_G_AUDIO 0x80345621
#define CMD64_VIDIOC_G_AUDOUT 0x80345631
#define CMD64_VIDIOC_G_CROP 0xc014563b
#define CMD64_VIDIOC_G_CTRL 0xc008561b
#define CMD64_VIDIOC_G_DV_TIMINGS 0xc0845658
#define CMD64_VIDIOC_G_EDID 0xc0285628
#define CMD64_VIDIOC_G_ENC_INDEX 0x8818564c
#define CMD64_VIDIOC_G_EXT_CTRLS 0xc0205647
#define CMD64_VIDIOC_G_FBUF 0x8030560a
#define CMD64_VIDIOC_G_FMT 0xc0d05604
#define CMD64_VIDIOC_G_FREQUENCY 0xc02c5638
#define CMD64_VIDIOC_G_INPUT 0x80045626
#define CMD64_VIDIOC_G_JPEGCOMP 0x808c563d
#define CMD64_VIDIOC_G_MODULATOR 0xc0445636
#define CMD64_VIDIOC_G_OUTPUT 0x8004562e
#define CMD64_VIDIOC_G_PARM 0xc0cc5615
#define CMD64_VIDIOC_G_PRIORITY 0x80045643
#define CMD64_VIDIOC_G_SELECTION 0xc040565e
#define CMD64_VIDIOC_G_SLICED_VBI_CAP 0xc0745645
#define CMD64_VIDIOC_G_STD 0x80085617
#define CMD64_VIDIOC_G_TUNER 0xc054561d
#define CMD64_VIDIOC_LOG_STATUS 0x5646
#define CMD64_VIDIOC_OVERLAY 0x4004560e
#define CMD64_VIDIOC_PREPARE_BUF 0xc058565d
#define CMD64_VIDIOC_QBUF 0xc058560f
#define CMD64_VIDIOC_QUERYBUF 0xc0585609
#define CMD64_VIDIOC_QUERYCAP 0x80685600
#define CMD64_VIDIOC_QUERYCTRL 0xc0445624
#define CMD64_VIDIOC_QUERYMENU 0xc02c5625
#define CMD64_VIDIOC_QUERYSTD 0x8008563f
#define CMD64_VIDIOC_QUERY_DV_TIMINGS 0x80845663
#define CMD64_VIDIOC_QUERY_EXT_CTRL 0xc0e85667
#define CMD64_VIDIOC_REQBUFS 0xc0145608
#define CMD64_VIDIOC_STREAMOFF 0x40045613
#define CMD64_VIDIOC_STREAMON 0x40045612
#define CMD64_VIDIOC_SUBDEV_DV_TIMINGS_CAP 0xc0905664
#define CMD64_VIDIOC_SUBDEV_ENUMSTD 0xc0485619
#define CMD64_VIDIOC_SUBDEV_ENUM_DV_TIMINGS 0xc0945662
#define CMD64_VIDIOC_SUBDEV_ENUM_FRAME_INTERVAL 0xc040564b
#define CMD64_VIDIOC_SUBDEV_ENUM_FRAME_SIZE 0xc040564a
#define CMD64_VIDIOC_SUBDEV_ENUM_MBUS_CODE 0xc0305602
#define CMD64_VIDIOC_SUBDEV_G_CROP 0xc038563b
#define CMD64_VIDIOC_SUBDEV_G_DV_TIMINGS 0xc0845658
#define CMD64_VIDIOC_SUBDEV_G_EDID 0xc0285628
#define CMD64_VIDIOC_SUBDEV_G_FMT 0xc0585604
#define CMD64_VIDIOC_SUBDEV_G_FRAME_INTERVAL 0xc0305615
#define CMD64_VIDIOC_SUBDEV_G_SELECTION 0xc040563d
#define CMD64_VIDIOC_SUBDEV_G_STD 0x80085617
#define CMD64_VIDIOC_SUBDEV_QUERYCAP 0x80405600
#define CMD64_VIDIOC_SUBDEV_QUERYSTD 0x8008563f
#define CMD64_VIDIOC_SUBDEV_QUERY_DV_TIMINGS 0x80845663
#define CMD64_VIDIOC_SUBDEV_S_CROP 0xc038563c
#define CMD64_VIDIOC_SUBDEV_S_DV_TIMINGS 0xc0845657
#define CMD64_VIDIOC_SUBDEV_S_EDID 0xc0285629
#define CMD64_VIDIOC_SUBDEV_S_FMT 0xc0585605
#define CMD64_VIDIOC_SUBDEV_S_FRAME_INTERVAL 0xc0305616
#define CMD64_VIDIOC_SUBDEV_S_SELECTION 0xc040563e
#define CMD64_VIDIOC_SUBDEV_S_STD 0x40085618
#define CMD64_VIDIOC_SUBSCRIBE_EVENT 0x4020565a
#define CMD64_VIDIOC_S_AUDIO 0x40345622
#define CMD64_VIDIOC_S_AUDOUT 0x40345632
#define CMD64_VIDIOC_S_CROP 0x4014563c
#define CMD64_VIDIOC_S_CTRL 0xc008561c
#define CMD64_VIDIOC_S_DV_TIMINGS 0xc0845657
#define CMD64_VIDIOC_S_EDID 0xc0285629
#define CMD64_VIDIOC_S_EXT_CTRLS 0xc0205648
#define CMD64_VIDIOC_S_FBUF 0x4030560b
#define CMD64_VIDIOC_S_FMT 0xc0d05605
#define CMD64_VIDIOC_S_FREQUENCY 0x402c5639
#define CMD64_VIDIOC_S_HW_FREQ_SEEK 0x40305652
#define CMD64_VIDIOC_S_INPUT 0xc0045627
#define CMD64_VIDIOC_S_JPEGCOMP 0x408c563e
#define CMD64_VIDIOC_S_MODULATOR 0x40445637
#define CMD64_VIDIOC_S_OUTPUT 0xc004562f
#define CMD64_VIDIOC_S_PARM 0xc0cc5616
#define CMD64_VIDIOC_S_PRIORITY 0x40045644
#define CMD64_VIDIOC_S_SELECTION 0xc040565f
#define CMD64_VIDIOC_S_STD 0x40085618
#define CMD64_VIDIOC_S_TUNER 0x4054561e
#define CMD64_VIDIOC_TRY_DECODER_CMD 0xc0485661
#define CMD64_VIDIOC_TRY_ENCODER_CMD 0xc028564e
#define CMD64_VIDIOC_TRY_EXT_CTRLS 0xc0205649
#define CMD64_VIDIOC_TRY_FMT 0xc0d05640
#define CMD64_VIDIOC_UNSUBSCRIBE_EVENT 0x4020565b
