// Amazon FPGA Hardware Development Kit
//
// Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
// SPDX-License-Identifier: Apache-2.0

  // PCIe Slave (bar1) Interface from SH to CL
  assign bar1_sh_awready             =   1'b0;

  assign bar1_sh_wready              =   1'b0;

  assign bar1_sh_bvalid              =   1'b0;
  assign bar1_sh_bresp[1:0]          =   2'b0;

  assign bar1_sh_arready             =   1'b0;

  assign bar1_sh_rvalid              =   1'b0;
  assign bar1_sh_rdata[31:0]         =  32'b0;
  assign bar1_sh_rresp[1:0]          =   2'b0;

