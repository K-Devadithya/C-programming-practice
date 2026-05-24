## Project: Plaintext ATM Simulator

A terminal-based banking interface that simulates basic Automated Teller Machine (ATM) transactions including balance inquiries, deposits, and cash withdrawals. 

### Key Technical Concepts Demonstrated
- **File Stream Access Modes:** Explores the behavior of `r+` (Read/Write update mode) vs `w` (Truncate and Write mode).
- **File Pointer Repositioning:** Uses the `rewind()` function to reset the cursor back to the zeroeth byte index of the stream, enabling seamless sequential overwrite operations without closing and reopening file streams.
- **State Validation Blocks:** Implements interactive logic checking loops to guard against illegal overdraft limits and invalid withdrawal bounds.
