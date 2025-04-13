def calculate_tax(income):
    tax_brackets = [
        (1200, 0.06),
        (4600, 0.15),
        (8800, 0.24),
        (15000, 0.35),
        (float('inf'), 0.38)
    ]
    
    tax = 0
    previous_limit = 0
    
    for limit, rate in tax_brackets:
        if income <= limit:
            tax += (income - previous_limit) * rate
            break
        else:
            tax += (limit - previous_limit) * rate
            previous_limit = limit
    
    return tax

# Example usage
income = 2000  # in ten thousand won (만원)
tax = calculate_tax(income)
print(f"The calculated tax for an income of {income}만원 is {tax}만원.")