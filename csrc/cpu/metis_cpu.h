#pragma once

#include <torch/extension.h>

torch::Tensor partition_cpu(torch::Tensor rowptr, torch::Tensor col,
                            int64_t num_parts,torch::Tensor edge_wgt,
                            bool recursive);
