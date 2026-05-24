# Flat-Pointer Student Performance Grid Analyzer

A lightweight analytical processor built in C that allows educators to track multiple academic subjects per student. Instead of using complex, slow, nested array pointers, it models a multi-subject data table inside a single, flattened heap allocation block via custom algebraic index mapping.

---

## What the Program Does

This application functions as a terminal-based grading helper for managing multi-subject test data. It automates data collection, computes individual averages, and scales raw totals into normalized academic grades.

### 1. Dynamic Data Collection Phase
* The program prompts the user for the total number of students currently enrolled.
* It scales memory dynamically to fit that specific class size, then systematically prompts the instructor to input numerical marks for 5 independent subjects for each student.

### 2. Multi-Tiered Analytics Menu
Once the data grid is populated in memory, the program opens an interactive terminal prompt where the user can request two distinct analytics outputs without destroying or reloading the database:
* **Academic Average Tracker (A or a):** Loops through the chosen student's memory offset, aggregates their scores across all 5 subjects, divides the sum by 5, and outputs their floating-point mathematical mean instantly.
* **Cumulative Letter Grade Generator (G or g):** Accumulates the aggregate raw score across all subjects (out of a maximum possible score of 500) and routes the total score through a grading scale to classify performance.

### 3. The Letter Grading Metrics
The grading logic categorizes student performance based on their total cumulative marks:

| Total Marks Range | Letter Grade Awarded | Performance Tier |
| :--- | :--- | :--- |
| **450 to 500** | **A** | Outstanding Excellent |
| **400 to 449** | **B** | Very Good |
| **350 to 399** | **C** | Good |
| **300 to 349** | **D** | Satisfactory / Average |
| **Below 300** | **E** | Needs Improvement |

---

## Key Technical Concepts Demonstrated

- **Simulated Multi-Dimensional Memory Mapping:** Outperforms standard unoptimized multi-pointer 2D array matrix declarations by allocating one contiguous byte pool and tracking individual coordinate elements using the algebraic index formula: base_address[row_index * row_width + column_index].
- **Contiguous Heap Segment Allocation:** Implements structured dynamic scaling via raw bytes manipulation expressions (malloc(n * 5 * sizeof(int))), guaranteeing localized data proximity which enhances cache accessibility efficiency.
- **Resource Cleanup Management:** Features runtime defense checks to handle initialization failures gracefully and implements explicit end-of-lifecycle garbage cleanup steps via native free() calls.
- **Conditional Multi-Branch Scoring Engines:** Employs precise boundary check ranges to safely group complex performance scores into static academic tiers.
