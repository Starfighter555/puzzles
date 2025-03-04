import torch

def linear_model(x, m, b):
    y = m @ x + b
    return y

def main():
    m = torch.tensor([2.0])
    m.requires_grad=True
    b = torch.tensor([1.0])
    b.requires_grad=True
    y = linear_model(torch.tensor([4.0]), m, b)
    print(y)

if __name__ == "__main__":
    main()