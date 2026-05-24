# In-Memory Library Book Catalog & Search System

A lightweight, high-speed catalog program written in C that dynamically collects, structures, tracks, and searches library metadata logs entirely within stack memory.

## Key Technical Concepts Demonstrated

- **Variable Length Arrays (VLAs):** Allocates the exact layout footprint required for tracking records directly onto the program stack frame at runtime, bypassing static storage bounds and preventing buffer vulnerabilities.
- **In-Memory Record Matching:** Implements an array traversal search pattern that leverages standard string matching tools (`strcmp`) to locate specific target properties efficiently.
- **Terminal Buffer Management:** Features intentional stream spacing tools (`getchar()`) placed systematically between numeric evaluations and string extractions to eliminate residual trailing carriage returns (`\n`) from corrupting terminal read sequences.
- **Structured Complex Data Abstractions:** Uses structural data clusters to tie divergent variable footprints (character strings alongside scalar integers) into clean, object-oriented record units.
