SELECT 
    CASE 
        WHEN (SELECT COUNT(DISTINCT salary) FROM employee) < 2 THEN NULL
        ELSE (
            SELECT DISTINCT salary 
            FROM employee 
            ORDER BY salary DESC 
            LIMIT 1 OFFSET 1
        )
    END AS SecondHighestSalary;
