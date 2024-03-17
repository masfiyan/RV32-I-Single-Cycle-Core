# RV32-I-Single-Cycle-Core
Risc-V based Single Cycle Core, Implemented in SystemVerilog via Verilator

## How to Run

```bash
verilator -Wall --trace --cc <Design_fil_in_sv> --exe <testBench_file_in_cpp>
make -j -C obj_dir -f V<Design_file>.mk V<Design_file>
./obj_dir/V<Design_file>
```
