cd ../Source/backend/expr_parser
antlr4 -Dlanguage=Python3 expr.g4
cd ..
python3.6 main.py
python3.6 herbie_report.py
python3.6 irram_report.py
