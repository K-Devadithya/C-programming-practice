# Simple Hospital Management Record System

A terminal-based micro-database application written in C designed to record, store, retrieve, and filter patient diagnostic history records using low-level file output pipelines.

## Key Technical Concepts Demonstrated

- **Binary Stream Appending (`ab` Mode):** Writes freshly created custom structures sequentially onto the back end of binary files safely without wiping existing data entries.
- **Dynamic File Stream Searching:** Implements an on-disk pointer traversal logic that evaluates match keys (`x.id == id`) record-by-record directly from persistent storage without loading the entire dataset into RAM.
- **Resource Stream Allocation Lifecycle:** Features defensive return checks and strict file resource closure pathways (`fclose`) to prevent runtime memory leaks or stream locks during unexpected application interrupts.
- **Direct Record Block Deserialization:** Employs explicit structural chunk copies (`fread` using direct address references) to reconstitute data elements back into concrete variables instantly.
